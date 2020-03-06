#include <stdio.h>
#include <stdlib.h>
//Escreva uma funÃ§Ã£o que calcula o fatorial de um nÃºmero recebido por parÃ¢metro, devolvendo-o ao final.

void fatorial(n):
  if n == 0;
    return 1 
  else:
    return n*fatorial(n-1) //retornada por parÃ¢metro
}

int main (){
    printf("Digite um numero para calcular seu fatorial\n");
    scanf("%d\n", n);
    printf("%d\n",fatorial(n));
    return 0;
}