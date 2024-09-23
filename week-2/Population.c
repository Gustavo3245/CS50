#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int lhamas;
    int end_size;
    int calc = 0;
    int years = 0;

    // TODO: Prompt for start size

    do{
         lhamas = get_int("The size of population? ");

    }while(lhamas < 9);

    // TODO: Prompt for end size

    do{
         end_size = get_int("What the final size? ");

    }while(end_size < lhamas);

    // TODO: Calculate number of years until we reach threshold

    while(calc < (float) end_size){

        years++;
        calc = lhamas + (lhamas / 3) - (lhamas / 4);
        lhamas = calc;


    }

    // TODO: Print number of years
    printf("Years: %i \n", years);
}

