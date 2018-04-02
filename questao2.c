#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 3

int *recebe_notas(float *, int);
int conta_notas(int *, int);
// float percent_aprov();

int main(){
    float notas[TAMANHO];
    int i;
    // int bla[TAMANHO];
    int *bla;

    printf("Entre com as notas:\n");
    for(i = 0; i < TAMANHO; i++){
        scanf("%f", &notas[i]);
    }

    for(i = 0; i < TAMANHO; i++){
        printf("posicao: %d valor: %.2f\n", i, notas[i]);
    }

    bla = recebe_notas(notas, TAMANHO);
    for(i = 0; i < TAMANHO; i++){
        printf("posicao: %d valor: %f\n", i, &bla);
    }

    return 0;
}

int *recebe_notas(float *notas, int tamanho){
    int apr[TAMANHO];
    int i;

    for(i = 0; i < TAMANHO; i++){
        if(notas[i] >= 6.0){
            apr[i] = 1;
        } else {
            apr[i] = 0;
        } 
    }

    return apr;
}

int conta_notas(int *apr, int tamanho){
    // int qtd_apr = 0;
    // int qtd_rep = 0;
    int qtd[2] = {0};
    int i;

    for(i = 0; i < TAMANHO; i++){
        if(apr[i] == 1){
            // qtd_apr++;
            qtd[0]++; 
        } else {
            // qtd_rep++;
            qtd[1]++;
        }
    }

    // return qtd_apr;
    return qtd;
}

// float percent_aprov(){

// }