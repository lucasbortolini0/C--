#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
int main (){
	int i;
	int tamanho;
	char palavra[256];
	setlocale (LC_ALL, "");
	printf ("Informe uma palavra: ");
	gets (palavra);
	printf ("\n");
	tamanho = strlen(palavra);
	for (i = 0; i <= tamanho; i++){
		// Verifica se a posição da letra é par
		if (i % 2 == 0){
			palavra[i] = toupper(palavra[i]);
			printf ("%c\n", palavra[i]);
		}
		// Verifica se a posição da letra é ímpar
		else if (i % 2 != 0){
			palavra[i] = tolower(palavra[i]);
			printf ("%c\n", palavra[i]);
		}
	}
	system ("pause");
	return 0;
}
