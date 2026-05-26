#include <stdio.h>

int main()
{
    int n;

    printf("digite a altura do seu triangulo de pascal:\n");
    scanf("%d", &n);

    int mat[n][n];

    for (int i = 0; i < n; i++)
    {
        mat[i][0] = 1;
        mat[i][i] = 1;
        if (i >= 2)
        {
            for (int j = 1; j < i; j++)
            {
                mat[i][j] = mat[i - 1][j - 1] + mat[i - 1][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
