#include <stdio.h>

int num1, num2, resto;

int main(void) {

  printf("Informe o primeiro valor:\n");
  scanf("%d", &num1);
  printf("Informe o segundo valor:\n");
  scanf("%d", &num2);
  if (num1 == 0 || num2 == 0)
  {
    printf("Nao eh possivel realizar divisao por zero\n");
  }
  else if (num1 >= num2)
  {
    resto = num1 % num2;
    printf("O resto da divisao eh %d\n", resto);
  }
  else
  {
    resto = num2 % num1;
    printf("O resto da divisao eh %d\n", resto);
  } 

  return 0;
}