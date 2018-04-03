#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

void fneuronio(double*, double*, int, int, int*);

int main(){
    double entradas[TAMANHO] = {0};
    double pesos[TAMANHO] = {0};
    double limiarT = 0.0;
    int i, memory;
    int* resultado = &memory;

    printf("Entre com os valores:\n");

    for(i = 0; i < TAMANHO; i++){
        scanf("%lf", &entradas[i]);
    }

    printf("Entre com os pesos:\n");

    for(i = 0; i < TAMANHO; i++){
        scanf("%lf", &pesos[i]);
    }

    printf("Entre com o limiar T:\n");
    scanf("%lf", &limiarT);

    fneuronio(entradas, pesos, limiarT, TAMANHO, resultado);

    if(*resultado == 1){
        printf("Neurônio ativado!\n");
    }else{
        printf("Neurônio inibido!\n");
    }

    return 0;
}

void fneuronio(double* entradas, double* pesos, int limiarT, int tamanho, int* resultado){
    double SOMAP = 0.0;
    int j;

    for(j = 0; j < tamanho; j++){
        SOMAP += entradas[j]*pesos[j];
    }

// printf("Soma Ponderada: %.2f\n", SOMAP);

    if(SOMAP > limiarT){
        *resultado = 1;
    } else {
        *resultado = 0;
    }
}
