#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
int main (){
    int i;
    int numero1;
    int numero2;
    int numeroInicio;
    int soma;
    setlocale (LC_ALL, "");
    printf ("Informe o primeiro n�mero: ");
    scanf ("%d", &numero1);
    printf ("\n");
    printf ("Informe o segundo n�mero: ");
    scanf ("%d", &numero2);
    printf ("\n");
    numeroInicio = numero1;
    soma = 0;
    /* o comando a seguir vai atribuindo +1 ao primeiro n�mero, somando com o 
       anterior e por fim acrescentando numa vari�vel soma */
    for (i = numero1; i <= numero2; i++){
         soma = numero1 + soma;
         numero1++;
    }
    printf ("Primeiro n�mero: %d\n", numero1);
    printf ("Segundo n�mero: %d\n", numero2);
    printf ("Soma: %d\n", soma);
    system ("pause");
    return 0;
}
