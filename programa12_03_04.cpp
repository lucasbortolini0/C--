#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]){
    int i;
    int j;
    // vetor
    int resultado[11];
    // define o número a ser multiplicado
    for (i = 1; i < 11; i++){
        // realiza de fato o processo de multiplicação
        for (j = 1; j < 11; j++){
            resultado[i] = i * j;
            printf ("%d * %d = %d\n", i, j, resultado[i]);
        }
    printf ("\n");
    }
    system ("pause");
    return 0;
}

