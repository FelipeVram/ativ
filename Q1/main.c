#include <stdio.h>

int main(){

int altura;
int pref=0;
    printf("qual a altura do seu retangulo?\n");
    scanf("%d", &altura);

    printf("voce prefere o retangulo vazado(1) ou preenchido(2)?\n");
    scanf("%d", &pref);

    if (pref==1)
    {
        for (int i = 0; i < altura; i++)
        {
            for (int j = 0; j < altura; j++)
            {
                if (j==0 || j==altura-1 || i==0 || i==altura-1)
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
    
    else if (pref==2)
    {
        for (int i = 0; i < altura; i++)
        {
            for (int j = 0; j < altura; j++)
            {
                printf("*");
            }
            printf("\n");
        }   
    }
    
    else{
        printf("digite uma preferencia valida, tente novamente.");
    }

return 0;

}