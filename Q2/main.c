#include <stdio.h>

int main(){

    int alt, numeroimp;

    printf("digite o valor da altura da piramide(o valor necessita ser maior ou igual a 2)\n");
    scanf("%d", &alt);
    
    if (alt<2)
    {
        printf("valor invalido, tente novamente e digite outro valor");
    }
    else{

        for (int i = 0; i <= alt; i++)
        {
            numeroimp=1;
            for (int j = 0; j <= (alt*2)-1; j++)
            {
                if (j>=alt-(i-1) && j<=alt)
                {
                    printf("%d\t", numeroimp);
                    numeroimp++;
                    if (j==alt)
                    {
                        numeroimp--;
                    }
                    
                }
                else if (j>=alt && j<=alt+(i-1))
                {
                    numeroimp--;
                    printf("%d\t", numeroimp);
                }
                
                else{
                    printf("\t");
                }
            }
            printf("\n");
        }
    }
    return 0;
}