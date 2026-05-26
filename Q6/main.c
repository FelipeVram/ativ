#include <stdio.h>

int main()
{
    int B, L, H;
    printf("digite o tamanho da base(B) da sua arvore: \n");
    scanf("%d", &B);

    printf("digite o valor da largura(L) do tronco da arvore: \n");
    scanf("%d", &L);

    printf("digite o valor da altura(H) do tronco da arvore: \n");
    scanf("%d", &H);

    if (B % 2 != 1 || B < 3)
    {
        printf("valor de B invalido, tente novamente e digite um valor valido.");
    }

    else if (L < 1 || L % 2 != 1 || L > B / 2)
    {
        printf("valor de L invalido, tente novamente e digite um valor valido");
    }

    else if (H < 2 || H > B / 2)
    {
        printf("Valor de H invalido, tente novamente e digite um valor valido");
    }

    else
    {

        for (int i = 1; i <= (B + 1) / 2; i++)
        {
            for (int j = 1; j <= (B + 1) / 2 - i; j++) // espaços da pirâmide
            {
                printf(" ");
            }
            for (int k = 0; k < (2 * i) - 1; k++) // imprimir a pirâmide
            {
                printf("*");
            }
            printf("\n");
        }

        for (int i = 1; i <= H; i++)
        {
            for (int j = 1; j <= (B - L) / 2; j++) // espaços da base
            {
                printf(" ");
            }
            for (int k = 0; k < L; k++) // imprimindo a base da árvore
            {
                printf("*");
            }
            printf("\n");
        }
    }
}