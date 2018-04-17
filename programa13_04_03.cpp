#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
int main (int argc, char*argv[]){
    int i;
    int j;
    int numero;
    int numeroAtual;
    int numeroDaLinha;
    setlocale (LC_ALL, "");
    printf ("Informe o número: ");
    scanf ("%d", &numero);
    printf ("\n");
    numeroDaLinha = 0;
    numeroAtual = 0;
    for (i = 0; i <= numero; i++){ //Linhas
        for( j = 0; j <= i; j++ ){ //Números
              numeroAtual++; 
              printf ("%d", numeroAtual);
              if (numeroAtual == numero){
                 printf ("\n");
                 system ("pause");
                 return 0;
              }       
        }          
        printf ("\n");
    } 
}



