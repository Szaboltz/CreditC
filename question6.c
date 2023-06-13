#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, prestacao, valorPrestacao;

    printf("Digite o valor do salario bruto: ");
    scanf("%f", &salario);
    printf("Digite o valor da sua prestacao: ");
    scanf("%f", &prestacao);

    valorPrestacao = salario * 0.3;

   if (prestacao <= valorPrestacao) {
    printf("Credito liberado!");
   } else {
    printf("Credito negado!"); 
   }

   return 0;
}