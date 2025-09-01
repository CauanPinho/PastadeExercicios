#include <stdio.h>
/*Faça um programa que receba a altura e o sexo de uma pessoa, calcule e imprima o seu
peso ideal, utilizando as seguintes fórmulas:
• para homens: (72.7 * H) - 58;
• para mulheres: (62.1 * H) – 44.7.*/

int main() {
    float altura;
    char sexo;
    printf("digite sua altura");
    scanf("%f",&altura);
    printf("digite sua seu sexo Masculino(M) e Feminino(N)");
    scanf("%s",&sexo);
    if (sexo=="M"){
        float PesoIdeal;
        PesoIdeal=((72.7 * altura) - 58);
        printf("seu peso ideal é %f",PesoIdeal);

    }
    else
    {
        float PesoIdeal;
        PesoIdeal=((62.1 * altura) * 44.7);
        printf("seu peso ideal é %f",PesoIdeal);
    }
return 0;
} 