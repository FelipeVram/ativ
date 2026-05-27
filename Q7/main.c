#include <stdio.h>

int main()
{
    int n, contador = 1;
inicio:
    printf("digite o tamanho N da espiral que voce quer:");
    scanf("%d", &n);

    int mat[n][n];
    if (n < 3)
    {
        printf("tente novamente e escreva um valor maior ou igual a 3");
        goto inicio;
    }

    int to = 0, doo = n - 1, le = 0, ri = n - 1;
    while (le <= ri && to <= doo)
    {
        for (int i = le; i <= ri; i++)
        {
            mat[to][i] = contador++;
        }
        to++;

        for (int i = to; i <= doo; i++)
        {
            mat[i][ri] = contador++;
        }
        ri--;

        for (int i = ri; i >= le; i--)
        {
            mat[doo][i] = contador++;
        }
        doo--;
        for (int i = doo; i >= to; i--)
        {
            mat[i][le] = contador++;
        }
        le++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}