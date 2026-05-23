#include <stdio.h>

int main(){
    int altura=0, pref=0;

    printf("digite a altura do seu triangulo retangulo\n");
    scanf("%d", &altura);

    printf("digite se prefere o triangulo preenchido(1) ou vazado(2)\n");
    scanf("%d", &pref);

    if (pref==1 && altura>=1)
    {
        for (int i = 0; i < altura; i++)
        {
            for (int j = 0; j < altura; j++)
            {
                if (i>=j)
                {
                    printf("*");
                }
                else{
                    printf(" ");
                }
                
            }
            printf("\n");
        }
        
    }
    else if (pref==2 && altura>=1)
    {
        for (int i = 0; i < altura; i++)
        {
            for (int j = 0; j < altura; j++)
            {
                if (i==j||j==0||i==altura-1)
                {
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        
    }
    else{
        printf("digito invalido, tente novamente e insira um valor valido.");
    }
    
    return 0;
}