#include <ctype.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int Readbility_level(char string[], int text_length);

#define STRING_LENGTH_MAX 80
#define STRING_LENGTH_MIN 2

int main(int argc, char *argv[]){
  
    char string[STRING_LENGTH_MAX + 2];
    size_t string_length;

    do {
        printf("Type the string: (2 letters min, 80 max:) \n");
        scanf("%s", string);
        string_length = strlen(string);
    } while (string_length > STRING_LENGTH_MAX || string_length < 2);
    
    int result = Readbility_level(string, string_length);

    if (result < 1){
        printf("Before Grade ! \n");
        return 0;
    }
    else if(result > 16){
        printf("Grade 16+ \n");
        return 0;
    }
    else {
        printf("Grade: %d \n", result);
    }
}

int Readbility_level(char text[], int text_length){
    float letters, phrase = 0;
    float words = 1;

    for(int value = 0; value < text_length; value++){

        if(isalpha(text[value])){
            letters++;
        }
        else if (isspace(text[value])) {
            words++;
        }
        else if (text[value] == '.' || text[value] == '!' || text[value] == '?') {
            phrase++;
        }
    }
    float L = (letters / words) * 100;
    float S = (phrase / words) * 100;

    double return_value = (0.0588 * L - 0.296 * S - 15.8);
    return round(return_value);
}
