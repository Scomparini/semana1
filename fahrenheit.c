#include <stdio.h>

int main(void) {
  float celsius, fahrenheit;
  printf("Digite uma temperatura em Celsius\n");
  scanf("%f", &celsius);

  fahrenheit = celsius * 9/5 +32;

  printf("\nUma temperatura de %f graus Celsius equivale a %f graus Fahrenheit", celsius, fahrenheit);
  return 0;
}