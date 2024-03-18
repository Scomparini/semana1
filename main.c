#include <stdio.h>

int main(void) {
  
  int A,B;
  printf("Digite o primeiro e segundo valor, separados por um espaco\n");
  scanf("%d %d", &A, &B);
  
  printf("soma = %d, subtração = %d, multiplicação = %d e divisao = %d",(A+B), (A-B), (A*B), (A/B));
  return 0;
}
