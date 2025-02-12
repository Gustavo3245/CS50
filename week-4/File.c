#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  FILE* ptr = fopen("./adress", "r");
  

  char caracter; //create a char variable
  while ((caracter = fgetc(ptr)) != EOF) { //loop the file and print every caracter.
    fputc(caracter, ptr); //
  }

  fclose(ptr); //close the file and destroy the memory location.

  

  int array[10];
  fread(array, sizeof(int), 10, ptr);

  double* array2 = malloc(sizeof(double) * 10);
  fread(array2, sizeof(array2), 10, ptr);

  fwrite(array2, sizeof(array2), 10, ptr);

  free(array2);


}

