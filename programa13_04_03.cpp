#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
int main (int argc, char *argv[]){
    int i;
    int posicao;
    int tamanhoFrase;
    char frase[256];
    setlocale (LC_ALL, "");
    printf ("Informe a frase: ");
    fgets (frase, sizeof(frase), stdin);
    tamanhoFrase = strlen(frase);
    printf ("\n");
    for (i = 0, posicao = 0; i <= tamanhoFrase; i++, posicao++){
    	//  a logica adiciona ao ' ' um elemento a mais
        if ( frase[posicao] == ' '){
			posicao++; 
        }
	frase[i] = frase[posicao];    
    }
    printf ("Frase reformulada: %s", frase);
    system ("pause");
    return 0;
}


