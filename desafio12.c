#include <stdio.h>
/*Faça um programa que receba três notas de um aluno, calcule e imprima a média
aritmética entre essas três notas e uma mensagem que segue a tabela abaixo:*/
int main(){
    float x,y,z,md;

    printf("digite o valor da sua nota ");
    scanf("%f",&x);
    printf("digite o valor da sua nota ");
    scanf("%f",&y);
    printf("digite o valor da sua nota ");
    scanf("%f",&z);
    md=(x+y+z)/3;
    if (md>=6) {
        printf("vc passou");
    }else 
    {
        printf("vc reprovou");
    }
return 0;
}