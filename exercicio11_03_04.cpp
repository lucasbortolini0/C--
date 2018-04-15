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
    printf ("Informe o número: ");
    scanf ("%d", &numero);
    printf ("\n");
    system("color 02");
    linha = 1;
    k = numero - 1;
    for (i = 1; i <= numero; i++){
         /* o contador dará o número de espaços igual ao numero informado - 1
            e irá subtraindo da contagem até o fim */
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
            // o contador dará o número de espaços até um anterior ao asterisco inicial
    	for (j = 1; j < k; j++){
    		printf (" ");
    	}
           // como o *** está fora do looping, ele começará a printar no espaço que terminou
    	printf ("***");
    	printf ("\n");
	}
	printf ("\n"); 
    system ("pause");
    return 0;
}

