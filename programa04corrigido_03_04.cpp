#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#define TRUE 1
#define FALSE 0
int main (int argc, char*argv[]){
    int i;
    int j;
    int achou = FALSE;
    int tamanhoPalavra;
    int tamanhoFrase;
    int tamanhoComparacao;
    char frase[256];
    char palavra[256];
    setlocale (LC_ALL, "");
    printf ("Informe a frase: ");
    gets (frase);
    strlwr(frase);
    printf ("\n");
    printf ("Informe a palavra: ");
    gets (palavra);
    strlwr(palavra);
    printf ("\n");
    tamanhoFrase = strlen(frase);
    tamanhoPalavra = strlen(palavra);
    tamanhoComparacao = 0;
    for ( i = 0; achou == FALSE && i < tamanhoFrase; i++){
        for (j = 0; achou == FALSE && j < tamanhoPalavra; j++){
            if (frase[i] == palavra[j]){
               tamanhoComparacao++;
               if (tamanhoComparacao == tamanhoPalavra){
               	  achou = TRUE;	
               }
        	}
		}
	}
	if(achou == TRUE)
		{
	    	printf("\n  Está contida \n");
        } else {
    		printf("\n Não está contida \n");
        }
		system("pause");
	   	return 0 ;
	}                 
}


