#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
int main (int argc, char*argv[]){
    int i;
    int j;
    // vetor 
    int numero[10];
    int soma;
    setlocale (LC_ALL, "");
    // este comando aloca um número em cada variável do vetor numero[10]
    for ( i = 1; i <= 10; ){
        printf ("Informe um número: ");
        scanf ("%d", &numero[i]);
        i++;
        printf ("\n");
    }
    soma = numero[1] + numero[2] + numero[3] +
    numero[4] + numero[5] + numero[6] + numero[7] +
    numero[8] + numero[9] + numero[10]; 
    printf ("Soma: %d\n", soma);
    system ("pause");
    return 0;
}    
