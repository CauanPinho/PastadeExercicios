#include <stdio.h>
/*Faça um programa que receba a idade de um nadador e imprima a sua categoria seguindo
as regras:
categoria
infantil A
infantil B
juvenil A
juvenil B
sênior
idade
5 – 7 anos
8 – 10 anos
11 – 13 anos
14 – 17 anos
maiores de 18 anos*/
int main(){
    int idade;
    printf("Digite sua idade");
    scanf("%d",&idade);
    if (idade>5 && idade<7){
        printf("vc é infantil A");

    }
    else if(idade>7 && idade<10)
    {
        printf("vc é infantil B");
    }
    else if (idade>14 && idade<18){

        printf("vc é JUVENIL A");
    }
    else if(idade>=18)
    {
        printf("vc é JUVENIL B");
    }
return 0;
}
        
    

