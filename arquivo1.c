#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#define N 1000
//cplusplus.com
//teste para uso do git

int gerar_vetor_aleatorio(int vet[]){

    for (int i =0;i<N;i++) {
       vet[i]= rand() % 10000;
    }
   return vet;
}

void bubble_sort(int vet[]){

      int controle = 0;

      for (int i = 1; i < N; i++) {
        for (int j = 0; j < N - i; j++) {
            if (vet[j] > vet[j+1]) {
                controle = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = controle;
            }
        }
      }
}

int calc_mediana(int vet[]){

    int mediana=0;
    mediana= vet[499]+vet[500];
    return mediana/2.;

}

int main(){

    setlocale(LC_ALL, "");
    int vetor[N];
    int mediana=0;

    gerar_vetor_aleatorio(vetor);
    bubble_sort(vetor);

    for(int i=0; i<N;i++){

     printf(" %d", vetor[i]);
    }

    mediana=calc_mediana(vetor);
    printf("\n MEDIANA: %d", mediana);

    return 0;
}
