#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
int main (int argc, char*argv[]){
    int i;
    int j ;
    int x;
    int numeroAtual;
    int numeroDaLinha;
    setlocale (LC_ALL, "");
    printf ("Informe o número: ");
    scanf ("%d", &x);
    printf ("\n");
    numeroDaLinha = 0;
    numeroAtual = 0;
    for (i = 0; i <= x;){
        for( j = 0; j <= numeroDaLinha; j++ ){
              i++;
              numeroAtual++; 
              printf ("%d", numeroAtual);
              if (numeroAtual == x){
                 printf ("\n");
                 system ("pause");
                 return 0;
              }       
        }          
        printf ("\n");
        numeroDaLinha++;
    } 
}

