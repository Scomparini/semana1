#include <stdio.h>
#define pi 3.1415926

int main(void) {

float area, raio;

printf("Digite o raio do círculo \n");
scanf("%f", &raio);

area = pi * raio * raio;

printf("O raio eh %.2f, a area eh %.2f\n", raio, area);
  return 0;
}