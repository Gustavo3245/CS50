#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>

int main()
{
  char *s = "Abacaxi";
  char *t = malloc(strlen(s) + 1);
  
  int *number = malloc(sizeof(int));
  float *float_array = malloc(sizeof(number) * sizeof(float));

  if (t ==  NULL){ // se o computador ficar sem memoria, ele return NULL.
    return 1;
  }
  if (float_array == NULL){
    printf("Error: Alocation Memory");
  }

  strcpy(t, s); //copiando s em t. mesma coisa de copiar com loop.
  
  free(t);
  return 0;
}
