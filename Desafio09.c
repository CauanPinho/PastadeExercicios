/*Faça um programa que receba o preço de um produto e o seu código de orígem e imprima
a sua procedência. A procedência obedece a seguinte tabela:*/


#include <stdio.h>
int main(){
    int p,cdg;

    printf("DIGITE O PREÇO DO PRODUTO SEU PRODUTO?");
    scanf("%d",&p);
    printf("digite o valor do codigo do produto");
    scanf("%d",&cdg);
    switch (cdg){
        case 1:
        printf("Sua procedencia é sul");
            break;
        case 2:
        printf("Sua procedencia é norte");
            break;
        case 3:
        printf("Sua procedencia é leste");
            break;
        case 4:
        printf("Sua procedencia é oeste");
            break;
        case 5:
        case 6: 
        printf("sua procedencia é nordeste");
        break;
        case 7:
        case 8:
        case 9:
        printf("sua procedencia é sudeste");
        break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        printf("sua procedencia é centro-oeste");
        break;
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        printf("sua procedencia é do nordeste ");
        break;
        default:printf("vc digitou o valor errado");


    }
return 0;
}
