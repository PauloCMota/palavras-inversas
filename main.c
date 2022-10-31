#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int i; char palavras[3] [30];
    FILE *f = fopen("Arquivo.txt 2", "w");
    setlocale(LC_ALL,"Portuguese");

    // capturar palavras
    for(i=0;i<3;i++)
    {
        printf("Informe palavra %d : " , i+1);
        gets(palavras[i]);
    }
    //EXIBE EM ORDEM INVERSA
    printf("\n::: Palavras em ordem inversa :::\n");
    for(i=2;i>=0;i--)
    {
        printf("%s\n",palavras[i]);
        fprintf(f,"%s" , palavras[i]);
    }
    fclose(f);
    return 0;
}
