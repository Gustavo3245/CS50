#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>


int checkSum(long credit);
int addrest(long credit);

//Gets the credit number
int main(void)
{
    int count = 0;
    int result = 0;
    long credit = get_long("Number: ");

    //count the numbers of digits in long credit.
    do {
    credit /= 10;
    ++count;
    } while (credit != 0);

    result += checkSum(credit);
    result += addrest(credit);

    if(result % 10 == 0){
        printf("Cartão Valido");
    }

}

int checkSum(long credit){

    int sum = 0;
    int lastDigit;

    //removing the last digit.
    credit = credit / 10;

    for(int i = 0;i < sizeof(credit); i++){

        if(credit > 10){

        //taking the sequence number and deleting the next one.
        lastDigit = credit % 10;
        credit = credit / 100;

        }
        //Get the first number in long.
        else{
            lastDigit = credit;
            printf("%i \n", lastDigit);
        }

        lastDigit = lastDigit * 2;

        if(lastDigit > 9){
            lastDigit = (lastDigit % 10) + 1;
            sum += lastDigit;
        }
        else{
            sum += lastDigit;
        }
    }
    return sum;

}

int addrest(long credit){

    int sumrest = 0;
    int restDigit;

    for(int i = 0;i < sizeof(credit); i++){

        if(credit > 10){

        //taking the sequence number and deleting the next one.
        restDigit = credit % 10;
        credit = credit / 100;

        }
        //Get the first number in long.
        else{
            restDigit = credit;
            printf("%i \n", restDigit);
        }
        sumrest += restDigit;
    }
    return sumrest;
}

