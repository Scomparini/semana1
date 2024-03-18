#include <stdio.h>

int main() {
  float peso, altura;

  printf("\nDigite o peso: ");
  scanf("%f", &peso);

  printf("\nDigite a altura: ");
  scanf("%f", &altura);

  float imc = peso / (altura * altura);

  printf("\nO IMC de uma pessoa com peso %.2f e altura %.2f é igual a %.2f", peso, altura, imc);
  return 0;
}