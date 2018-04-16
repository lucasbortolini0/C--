#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main (){
    int i;
    int j;
    int numero;
    setlocale (LC_ALL, "");
    printf ("Informe o número: ");
    scanf ("%d", &numero);
    for (i = 1; i <= numero; i++){
         for (j = 1; j <= i; j++){
             printf ("*");
         }
    printf ("\n");        
    }
    system ("pause");
    return 0;
}
