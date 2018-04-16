#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
int main (int argc, char*argv[]){
	int i;
	int j;
	int tamanhoFrase;
	int palavras;
	char frase[256];
	setlocale (LC_ALL, "");
	printf ("Informe uma frase: ");
	gets (frase);
	printf ("\n");
	strlwr (frase);
	tamanhoFrase = strlen(frase);
	palavras = 0;
	for (i = 0; i <= tamanhoFrase; i++){
    // se o caractere for um espaço, ele soma um à variável palavra
		if (frase[i]  ==  ' ') {
			palavras++;
		}
	}
	palavras++;
	printf ("O número de palavras é: %d\n", palavras);
	system ("pause");
	return 0;
}

