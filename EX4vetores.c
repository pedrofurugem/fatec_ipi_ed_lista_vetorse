#include<stdio.h>
#include<stdlib.h>
// ex 4
//Escreva um programa em C que ordena um vetor de 40 elementos digitados
// pelo usuÃ¡rio.
int main () {

    int v [40], vaux;
    for(i=0; i<40; i++){
        printf("Digite um numero: %d\n do vetor", i);
        scanf("%d", &v[i]);
    }
//parte da ordenaÃ§Ã£o
    for (int x=0; x<40; x++){
        for int y=0; y<40; y++){
            if(v[x] > v[y]){
                vaux = vetor[x];
                v[x] == v[y];
                v[y] = vaux;
            }
        }
    }

    for(int i=0; i<40; i++){
        printf("o numero do vetor %d eh: %d \n", i, v[i]);
    }

    return 0;
}