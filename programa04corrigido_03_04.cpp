#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
int main(int argc, char*argv[]){
	char palavra[100];
	char frase[100];
	setlocale (LC_ALL, "");
	printf("\Informe uma frase: ");
	gets(frase);
	printf("\n");
	printf("Informe uma palavra: ");
	gets(palavra);
	printf ("\n");
	if(strstr(frase, palavra) != NULL){
		printf ("\n");
  		printf("Existe");
	}
	else {
		printf ("\n");
		printf("Não existe");
	}
	printf ("\n");
	system ("pause");
	return 0;
}


