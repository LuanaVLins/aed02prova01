#include <stdio.h>
#include <stdlib.h>
#include "questao02.h"

void entrada02(float *salarioB) {
    printf("Digite seu salario bruto: ");
    scanf("%f", salarioB);
}


int processamento02(float *salarioB, float *salarioLiquido) {
   if(*salarioB < 2000) {
        *salarioLiquido = *salarioB - (*salarioB * 10 / 100);
        return 1;
   } else {
        *salarioLiquido = *salarioB - (*salarioB * 20 / 100);
        return 0;
   }
}


void saida02(int resultado, float salarioLi) {
    if(resultado) {
        printf("O salario passou a ser %f com 10%% de desconto", salarioLi);
    } else {
        printf("O salario passou a ser %f com 20%% de desconto", salarioLi);
    }
}


void questao02(void) {
    float salarioBruto, salarioLiquido, resultado;

    entrada02(&salarioBruto);

    resultado = processamento02(&salarioBruto, &salarioLiquido);

    saida02(resultado, salarioLiquido);

}
