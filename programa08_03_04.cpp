#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
int main (){
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
    soma = 0;
    // este comando faz a somatória
    for ( j = 1; j <= 10;){
        soma = soma + numero[j];
        j++;
    }
    printf ("Soma: %d\n", soma);
    system ("pause");
    return 0;
}      
