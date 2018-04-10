#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
int main (){
    int i;
    int j;
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
    for ( i = 0; i <  tamanhoFrase; i++){
        for (j = 0; j <  tamanhoPalavra; j++){
            if (frase[i] == palavra[j]){
               tamanhoComparacao++;
            } 
			if (frase[i] == 32){
				if (tamanhoComparacao == tamanhoPalavra){
        			printf ("A palavra %s está contida na frase. \n", palavra);
        			system ("pause");
        			return 0;
    			} 
    			else{ 
    				tamanhoComparacao = 0;
    			}
			}       
        }
    }
    printf ("Não está\n");
    system ("pause");
    return 0;                    
}   

