/*faça um programa que receba a medida de um ângulo em graus, um número inteiro.
Determine e imprima o quadrante em que se localiza este ângulo. Considere os quadrantes
abaixo:*/
#include <stdio.h>

int main(){
    int grau;
    printf("Digite o valor inteiro do angulo");
    scanf("%d",&grau);
    if (grau>=0 && grau<=90);printf("vc pertence ao primeiro quadrante");
    if (grau>90 && grau<180);printf("vc pertence ao segundo quadrante");
    if (grau>180 && grau<=270);printf("vc pertence ao terceiro quadrante");
    if (grau>270 && grau>=360);printf("vc pertence ao quarrto quadrante");
return 0;
}