#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
int main (int argc, char*argv[]){
		int j;
		int letras;
		int numeros;
		int vogais;
		int consoantes;
		int tamanhoPalavra;
		char palavra[30];
		setlocale (LC_ALL, "");
		printf ("Informe a palavra: ");
		gets (palavra);
		printf("\n");
		tamanhoPalavra = strlen (palavra);
		vogais = 0;
		consoantes = 0;
		numeros = 0;
		letras = 0;
		for (j = 0; j < tamanhoPalavra; j++){
			// Acrescenta o número às vogais
			if (palavra[j] == 'a' || palavra[j] == 'e' || palavra[j] == 'i' || palavra[j] == 'o' || palavra[j] == 'u'){
				vogais++;
			// Acrescenta o número às consoantes	
		    } else {	
				if (toupper(palavra[j]) != tolower(palavra[j])){
					consoantes++;
				}
  			// Acrescenta o número aos números
			if (toupper(palavra[j]) == tolower(palavra[j])){
			numeros++;
		    } 
		}
		}
		letras = vogais + consoantes;
		printf ("A quanidade de caractere(s) é: %d\n", tamanhoPalavra);
		printf ("A quanidade de vogal(is) é: %d\n", vogais);
		printf ("A quanidade de consoante(s) é: %d\n", consoantes);
		printf ("A quantidade de número(s) e símbolo(s) é: %d\n", numeros);
		printf ("A quantidade de letra(s) é: %d\n", letras);
		return 0;
}


