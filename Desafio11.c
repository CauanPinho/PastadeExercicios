/*Faça um programa que receba dois números e imprima o menor dos dois.*/

#include <stdio.h>
int main(){
    int x,y;
    printf("digite um numero");
    scanf("%d",&x);

    printf("digite um numero");
    scanf("%d",&y);


    if (y>x){
         printf("%d é maior",y);
    }else{
        printf("%d é maior",x);
    }
return 0;
}