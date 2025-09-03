#include <stdio.h>

int main(){
    /*Escreva um programa que leia três valores inteiros e mostre-os em ordem crescente*/
    int x,y,z,maior;
    printf("digite 3 numeros");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if(x>y && x>z);printf("%d,%d,%d",x,y,z);
    if(y>x &&y>z);printf("%d,%d,%d",y,x,y);
    if(z>y && z>x);printf("%d %d %d",z,x,y);
return 0;
}