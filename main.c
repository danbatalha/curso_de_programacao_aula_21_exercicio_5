#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float sal;
  char nome[30];

  printf("Digite o seu nome: ");
  scanf(" %s", nome);

  printf("Qual é o seu salário? ");
  scanf("%f", &sal);

  if (sal <= 1500) {
    sal = sal * 1.12;
  } else {
    sal = sal * 1.1;
  }

  printf("%s, seu novo salário será de %.2f.\n", nome, sal);

  return 0;
}