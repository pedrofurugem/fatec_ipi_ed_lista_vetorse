#include <stdio.h>
#include <stdlib.h>

// Escreva um programa em C que encontra o maior elemento 
// em um vetor de 10 valores digitados pelo usuÃ¡rio

int main (){
    
    int vet[10]
    int maior=0;
    for(i=0; i<10; i++){
        printf("digite 10 numeros\n:");
        scanf("%d", &vet[i]);
    }
    
    for(i=0; i<10; i++){
        While(vet[i]<maior){
                maior = vet[i];
            }
        }
     printf("o maior valor Ã© %d", maior);

    return 0;
}