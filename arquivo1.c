#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#define N 1000

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

void calc_mediana(int vet[]){

    int mediana=0;
    int mediana2=0;
    mediana= vet[499]+vet[500];
    mediana2=mediana/2.;
    printf("\n\nMEDIANA: %d", mediana2);

}

void calc_media (int vet[]) {
    int soma2 = 0;
    int media2 = 0;
    for (int i=0;i<N;i++) {
        soma2 = soma2 + vet[i];
    }
    media2 = soma2/N;
    printf ("\nMEDIA: %d", media2);
}

void imprime_vetor(int vet []){

     for(int i=0; i<N;i++){
        printf(" %d", vet[i]);
    }

}

void maior_menor(int vet[]){

    printf("\nMaior: %d", vet[0]);
    printf("\nMenor: %d\n\n", vet[N-1]);
}

int main(){

    setlocale(LC_ALL, "");
    int vetor[N];
    int mediana=0;
    int media=0;

    system("cls"); system("color B");
    printf("\n\t\t\t\t\t\t\t\t\tESTE PROGRAMA GERA 1000 VETORES COM VALORES ALEATÓRIOS ATÉ 10000!\n\n");

    gerar_vetor_aleatorio(vetor);
    bubble_sort(vetor);
    imprime_vetor(vetor);
    calc_mediana(vetor);
    calc_media(vetor);
    maior_menor(vetor);

    return 0; 
}
