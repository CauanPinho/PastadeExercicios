/*Escreva um programa que leia o valor de dois números inteiros e a operação aritmética
desejada: calcule, então, a reposta adequada. Utilize os símbolos da tabela a seguir para ler
qual a operação aritmética escolhida:*/


#include <stdio.h>

int main(){
    float x,y;
    int opera;
    printf("Digite um numero");
    scanf("%f",&x);
    printf("Digite um numero");
    scanf("%f",&y);
    printf("Digite a operação que vc quer fazer com esss 2 numeros [1] para soma [2] subtração [3] divisão [4]multiplicação");
    scanf("%d",&opera);
    switch(opera)
    {
        case 1:
        float soma; (soma=x+y); printf("\n a soma desses 2 numeros é %f",soma);break;
        case 2:
        float sub; (sub=x+y); printf("\n a sub desses 2 numeros é %f",sub);break;
        case 3:
        float div; (div=x/y); printf("\n a sub desses 2 numeros é %f",div);break;
        case 4:
        float multiplic; (multiplic=x*y); printf("\n a sub desses 2 numeros é %f",multiplic);break;
    }

return 0;
}