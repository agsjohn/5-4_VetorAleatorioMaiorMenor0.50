#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10
#define ALE 51

main() {
  int vet[TAM], x, par, maior, menor;
  srand(time(NULL));
  for(x = 0; x < TAM; x++){
    do{
      vet[x] = rand() % ALE;
      par = vet[x] % 2;
    }while(par != 0);
    maior = vet[x];
    menor = vet[x];
  }
  for(x = 0; x < TAM; x++){
    if(maior < vet[x]){
      maior = vet[x];
    }
    if(menor > vet[x]){
      menor = vet[x];
    }
  }
  printf("\nVetor: ");
  for(x = 0; x < TAM; x++){
    if(x == TAM - 1){
      printf("%i\n", vet[x]);
    }
    else{
      printf("%i - ", vet[x]);
    }
  }
  printf("Maior valor: %i \nMenor valor: %i", maior, menor);
  getchar();
}