#include <stdio.h>

int main(){

    int alt, numeroimp;

    printf("digite o valor da altura da pirâmide(o valor necessita ser maior ou igual a 2)\n");
    scanf("%d", &alt);
    
    for (int i = 0; i < alt; i++)
    {
        numeroimp=1;
        for (int j = 0; j < (alt*2)-1; j++)
        {
            if (j>alt-(i-1) && j<alt+(i-1))
            {
                printf("%d\t", numeroimp);
                numeroimp++;
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }
    
    return 0;
}