#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "questao01.h"

void entrada01(float *raio) {
    printf("Digite o tamanho do raio de um circulo: ");
    scanf("%f", raio);
}


void processamento01(float *raio, float *diametro, float *perimetro, float *area, float *volume) {
   *diametro = 2 * *raio;
   *perimetro = 2 * 3.14 * *raio;
   *area = 3.14 * pow(*raio,2);
   *volume = 4 / 3 * 3.14 * pow(*raio, 3);
}


void saida01(float diametro, float perimetro, float area, float volume) {
    printf("\nDiametro: %f\n", diametro);
    printf("\nPerimetro: %f\n", perimetro);
    printf("\nArea: %f\n", area);
    printf("\nVolume: %f\n", volume);
}


void questao01(void) {
    float raioCirculo, diametroCirculo, perimetroCirculo, areaCirculo, volumeCirculo;

    entrada01(&raioCirculo);

    processamento01(&raioCirculo, &diametroCirculo, &perimetroCirculo, &areaCirculo, &volumeCirculo);

    saida01(diametroCirculo, perimetroCirculo, areaCirculo, volumeCirculo);

}
