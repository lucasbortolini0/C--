#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
int main (){
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
	palavras = 1;
	for (i = 0; i <= tamanhoFrase; i++){
    // se o caractere for um espa�o, ele soma um � vari�vel palavra
		if (frase[i]  ==  ' ') {
			palavras++;
		}
	}
	printf ("O n�mero de palavras �: %d\n", palavras);
	system ("pause");
	return 0;
}

