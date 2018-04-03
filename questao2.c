#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 3

int* recebe_notas(float*, int, int*);
void conta_notas(int*, int, int*, int*);
int percent_aprov(int*, int*, int*, int*,int);

int main(){
    float notas[TAMANHO];
    int APR[TAMANHO];
    int* p;
    int* apro;
    int* repro;
    int* per_apro;
    int* per_repro;
    int i, aprovados=0, reprovados=0, per_aprovados=0, per_reprovados=0;
    int maioria;

    apro = &aprovados;
    repro = &reprovados;
    per_apro= &per_aprovados;
    per_repro= &per_reprovados;

    printf("Entre com as notas:\n");
    for(i = 0; i < TAMANHO; i++){
        scanf("%f", &notas[i]);
    }

    for(i = 0; i < TAMANHO; i++){
        printf("posicao: %d valor: %.2f\n", i, notas[i]);
    }

    p = recebe_notas(notas,TAMANHO,APR);
    conta_notas(APR,TAMANHO,apro,repro);
    maioria = percent_aprov(apro,repro,per_apro,per_repro,TAMANHO);

    printf("Quantidade de aprovados: %d\n", *apro);
    printf("Quantidade de reprovados: %d\n", *repro);
    printf("Percentual de aprovados: %d\n", *per_apro);
    printf("Percentual de rerovados: %d\n", *per_repro);

    if(maioria == 1){
      printf("Mais da medate da turma foi aprovada!\n");
    }else{
      printf("Menos da medate da turma foi aprovada!\n");
    }
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

int percent_aprov(int* apro, int* repro, int* per_apro,
  int* per_repro, int tamanho){

    *per_repro = (((*repro)*100)/tamanho);
    *per_apro = ((float)*apro/tamanho)*100;

    if(*per_apro >= 51){
      return 1;
    }else{
      return 0;
    }
  }
