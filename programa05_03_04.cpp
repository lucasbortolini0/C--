#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main (){
    int i;
    int tamanhoPalavra;
    char x;
    char palavra[256];
    printf ("Informe uma palavra: ");
    fgets (palavra, sizeof(palavra), stdin);
    printf ("\n");
    tamanhoPalavra = strlen(palavra);
    for ( i = 0; i < tamanhoPalavra; i++){
         x = palavra[i];
         printf ( "%c", x);
         printf (" ");    
    }
    system ("pause");
    return 0;
} 

