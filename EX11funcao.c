#include <stdio.h>
#include <stdlib.h>

// Escreva uma funÃ§Ã£o que recebe um vetor de inteiros e inverte seu conteÃºdo. Por
//exemplo, o vetor 1, 2, 3, 4 deve ser invertido para 4, 3, 2, 1.


void inverte(int vet[ ], int posicao)
{
    int auxiliar, tamanho_vetor = posicao - 1;

    for (posicao = 0; posicao <= tamanho_vetor; posicao++)
    {
      auxiliar = vet[posicao];
      vet[posicao] = vet[tamanho_vetor];
      vet[tamanho_vetor] = auxiliar;
      tamanho_vetor--;
    }
}

int main()
{
    int vet[4], posicao;

    for (posicao = 0; posicao < 4; posicao++)
    {
        printf("Entre com os valores:\n");
        scanf(" %d", &vet[posicao]);
    }

    printf("\n");

    inverte(vet, posicao);

    int tamanho = posicao;
    for (posicao = 0; posicao < tamanho; posicao++)
    {
        printf("%d ", vet[posicao]);
    }
    printf("\n");

    return 0;
}