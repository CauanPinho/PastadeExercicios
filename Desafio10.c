/*Faça um programa que receba um número, verifique se este número é par ou ímpar e
imprima a mensagem.*/




#include <stdio.h>

int main(){
    int n;
    printf("digite um numero");
    scanf("%d",&n);
    if (n%2==0) {
        printf("esse numero é par");

    }else {
        printf("esse numero é impar");
    }
return 45;
}