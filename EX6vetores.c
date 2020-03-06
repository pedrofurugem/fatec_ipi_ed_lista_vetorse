#include<stdio.h>
#include<stdlib.h>

int main(){

    int vet[10], aux;
    printf("digite 10 valores:\n")
    for(i=0; i<10; i++){
        scnaf("%d", &vet[i]);
        aux = vet[i];

        for(j=0; j<10; j++){
            if(v[j] == aux){
                printf("NÃ£o pode valores repetidos\n");
                scanf("%d",&aux);
            }
            if(v[j] != aux){
            scanf("%d", &v[j]);
            }
        }
    }

    return 0;

}