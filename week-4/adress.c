#include <ctype.h>
#include <stdint.h>
#include <stdio.h>
#include <sys/types.h>
#include <string.h>

typedef int integer; //NÃO FAZ O MENOR SENTIDO FAZER ISSO
typedef uint8_t BYTE; //isso faz sentido, criar uma variavel 
                      //chamada byte com 8 bits de tamanho.
typedef char *string; // criando a variavel string sendo uma lista de char

typedef struct {
  int* Age;
  char* Name;
}pessoa;

int main(void)
{
  integer number1 = 50;
  uint8_t bytes = 255;

  string palavra = "Gustavinho";
  printf("%s\n", palavra);

  int n = 50;
  int *p = &n; // ou int* p = &n
  printf("%p \n", &p);
  printf("%i \n", *p);

  char s[30] = "Fulano";
  printf("%s\n", s);

  char *a = "Hi!";
  printf("%p\n", &a);

  char *name = "Gustavo";
  printf("%s\n", name);

  //pointer arithmetic
  
  printf("%c\n", *name);
  printf("%c\n", *(name + 1));

  char *string = "abacaxi";
  char *string2 = "abacaxi";
  
  if (strcmp(string, string2) == 0){
    printf("equals");

    char *change = string2;
    change[0] = toupper(change[0]);

    printf("string2: %s\n", string2);
    printf("change: %s", change);
  }
}

