#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 3

int* recebe_notas(float*, int, int*);
void conta_notas(int*, int, int* aprovados, int* reprovados);
int percent_aprov(int aprovados, int reprovados, float* per_aprovados, float* per_reprovados);

int main(){
    float notas[TAMANHO];
    int APR[TAMANHO];
    int* p;
    int* apro;
    int* repro;
    int i, aprovados=0, reprovados=0;

    apro = &aprovados;
    repro = &reprovados;

    printf("Entre com as notas:\n");
    for(i = 0; i < TAMANHO; i++){
        scanf("%f", &notas[i]);
    }

    for(i = 0; i < TAMANHO; i++){
        printf("posicao: %d valor: %.2f\n", i, notas[i]);
    }

    p = recebe_notas(notas,TAMANHO,APR);
    conta_notas(APR,TAMANHO,apro,repro);

    printf("%d\n", APR[1]);
    printf("%d\n", p[1]);
    printf("Numero de aprovados: %d\n", *apro);
    printf("Numero de reprovados: %d\n", *repro);
    return 0;
}

int* recebe_notas(float *notas, int tamanho, int* APR){
    int i;

    for(i = 0; i < tamanho; i++){
        if(notas[i] >= 6.0){
            APR[i] = 1;
        } else {
            APR[i] = 0;
        }
    }

    return APR;
}

void conta_notas(int* apr, int tamanho, int* aprovados, int* reprovados){
    int i;

    for(i=0 ; i<tamanho ; i++){
      if(apr[i] == 1){
          *aprovados += 1;
      }else{
          *reprovados += 1;
      }
    }
}
