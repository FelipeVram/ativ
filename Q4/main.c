#include <stdio.h>

int main(){
    int larg;

    printf("digite a largura central do losango\n");
    scanf("%d", &larg);

    if (larg%2!=1)
    {
        printf("tente novamente e digite um valor impar");
    }

    else{

        for (int i = 1; i <= (larg+1)/2; i++)  
        {
            for (int j = 1; j <= ((larg+1)/2)-i; j++)
            {
                printf(" ");
            }
            
            for (int k = 1; k <= (2*i)-1; k++)
            {
                printf("X");
            }
            printf("\n");
        }

        for (int i = 1; i <= (larg-1)/2; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf(" ");
            }
        
        for (int k = 1; k <= larg - (2*i); k++)
        {
            printf("X");
        }
            printf("\n");
        }
    }
    return 0;

    }