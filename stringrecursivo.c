#include <stdio.h>
#include <string.h>


void inverterStringRecursiva(char str[], int inicio, int fim) {
    
    if (inicio >= fim) {
        return;
    }

    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;

    inverterStringRecursiva(str, inicio + 1, fim - 1);
}

