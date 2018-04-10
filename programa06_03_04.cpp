#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
int main (){
    int i;
    char j;
    char x;
    char fraseMaiuscula;
    char fraseMinuscula;
    int tamanhoFrase;
    char frase[256];
    setlocale (LC_ALL, "");
    printf ("Informe a frase: ");
    gets (frase);
    tamanhoFrase = strlen(frase);
    system ("cls");
    printf ("Frase maiúscula: ");
    for (i = 0; i < tamanhoFrase; i++){
        j = toupper(frase[i]);
        printf ("%c", j);
    }
    printf ("\n");
    printf ("Frase minúscula: ");
    for (i = 0; i < tamanhoFrase; i++){
        x = tolower(frase[i]);
        printf ("%c", x);
    }
    printf ("\n");
    printf ("Frase: %s\n", frase);
    system ("pause");
    return 0;
}



