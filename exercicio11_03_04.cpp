#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
int main (int argc, char **argv){
    int i;
    int j;
    int k;
    int tronco;
    float asteriscos;
    float meio;
    int numero;
    int linha;
    setlocale (LC_ALL, "");
    printf ("Informe o n�mero: ");
    scanf ("%d", &numero);
    printf ("\n");
    system("color 02");
    linha = 1;
    k = numero - 1;
    for (i = 1; i <= numero; i++){
         /* o contador dar� o n�mero de espa�os igual ao numero informado - 1
            e ir� subtraindo da contagem at� o fim */
         for (j = 1; j <= k; j++){
         	 printf (" ");
         } 
		 k--;  	
         for (j = 1; j <= linha; j++){         	
             printf ("*");
         } 
    	printf ("\n");
    	linha = linha + 2;        
    }
    k = numero - 1;
    for (tronco = 1; tronco <= 3; tronco++){
            // o contador dar� o n�mero de espa�os at� um anterior ao asterisco inicial
    	for (j = 1; j < k; j++){
    		printf (" ");
    	}
           // como o *** est� fora do looping, ele come�ar� a printar no espa�o que terminou
    	printf ("***");
    	printf ("\n");
	}
	printf ("\n"); 
    system ("pause");
    return 0;
}

