#include <stdio.h>
#include <cs50.h>
void bricks(int bricks);
void dotts(int dots);

int main(void)
{
    int height;
    // Prompt the user for the pyramid's height
    do{
        height = get_int("Height: ");

    }
    while(height < 1 || height > 8);

    int dots = height;
    // Print a pyramid of that height

    for(int i = 0;i < height;i++){
        dotts(dots - i - 1);
        bricks(i + 1);


    }
}

void bricks(int bricks){
    for(int i = 0; i < bricks;i++){
        printf("#");
    }
    printf("\n");
}

void dotts(int dots){
    for(int i = 0;i < dots;i++){
        printf(" ");
    }
}

