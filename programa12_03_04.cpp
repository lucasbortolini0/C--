#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]){
    int i;
    int j;
    // vetor
    int resultado[10];
    // define o n�mero a ser multiplicado
    for (i = 1; i <= 10; i++){
        // realiza de fato o processo de multiplica��o
        for (j = 1; j <= 10; j++){
            resultado [j] = i * j;
            printf ("%d * %d = %d\n", i, j, resultado[j]);
        }
    printf ("\n");
    }
    system ("pause");
    return 0;
}

