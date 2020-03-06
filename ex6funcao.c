#include<stdio.h>

// Escreva uma funÃ§Ã£o que recebe um inteiro (1, 2 ou 3) que representa um mÃªs do
//primeiro trimestre. A funÃ§Ã£o deve exibir o mÃªs representado ou a mensagem â€œvalor
//invÃ¡lidoâ€ caso o valor seja diferente de 1, 2 e 3.

void mes (int valor){
    return valor;
}

int main (){
    int i, meses;
    printf("Digite um valor do meÃªs de Janeiro a Marco:\n");
    if (i < 0 || i > 3){
        printf("valor de mes invalido:\n");
    }
    else if (i = 1){
        meses = valor(i);
        printf("Janeiro\n");
    }
    else if (i = 2){
        meses = valor(i);
        printf("Fevereiro\n");
    }
    else if (i = 3){
        meses = valor(i);
        printf("Marco\n");
    }

    return 0;

}