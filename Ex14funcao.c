#include <stdio.h>
#include <stdlib.h>

int i, j, n, aux;

void funcao_ordena(int numero[]){
for( i=0; i<n; i++ ){
for( j=i+1; j<n; j++ ){
if( numero > numero[j] ){ // funÃ§Ã£o que ordena
aux = numero;
numero = numero[j];
numero[j] = aux;
}
}
}
printf("\n Ordenado com sucesso!");

}

main (void){
int i, vet[n], resultado; 

for (i=0; i<n; i++)
{
printf("Digite os numeros para ordenar: \n");
scanf("%d\n", &vet);
}

for (i=0; i<n; i++) //vetor ordenado
{
resultado = funcao_ordena(vet); //chama a funÃ§Ã£o
printf("%d\n", result);
}

return 0;

}

}