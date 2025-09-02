/*Faça um programa que receba uma frase, conte e imprima o número de vogais desta
frase.*/
#include <stdio.h>
#include <string.h>

int main() {
    char cd[10];
    printf("digite uma frase");
    scanf("%c",&cd);

    if ( cd=="a")
    {
        printf("Possui a letra a nessa frase");
    }
    else
    {
        printf("não há essa letra aqui");
    }
return 0;
}





