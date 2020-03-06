#include <stdio.h>
#include <stdlib.h>

// Escreva um programa em C que calcula a mÃ©dia de elementos armazenados
// em um vetor de 30 posiÃ§Ãµes

int main (){
    int vet[30], 
    int soma = 0 , media;
    printf("digite os valores:\n")
    for(i=0; i<30: i++){
        scanf("%d\n", &vet[i])
    }
//mostra os valores digitados
   for ( i = 0; i < 30; i++ ){
   printf ( "Foram digitados: %d\n", vet[i] );
   for ( i = 0; i < 30; i++ ){
   soma += vet[i];
   media = soma / 30;
   printf ( "\nO valor da Media eh: %.2f\n", media );
   }
}
   return 0;
}