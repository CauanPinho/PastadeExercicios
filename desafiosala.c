/* PRRENCHA 2 VETORES DE 5 POSICOES CADA FACA A SOMA ENTRE ELES E ESCREVA O RESULTADO*/

#include <stdio.h>//standart input output
int main(){

    //declaração de variaveis de vetor
    int v1[5],v2[5],vr[5];

    printf("\n\t preencha o primeiro vetor");
    
    for(int i=0;i<5;i++){
        printf("digite o valor %d valor",i+1);
        scanf("%i",&v1[i]);}
        //preenchimento do segundo vetor
    //preenchendo segundo vetor
    printf("preencha o segundo vetor");
    for (int i=0;i<5;i++){
        printf("digite o valor %d valor",i + 1);
        scanf("%i",&v2[5]);}
    //soma dos vetores
    printf("\n\t agora vamos mostrar o vator 1");

    for(int i=0;i<5;i++){
        printf("\t %i v1[i]");
        printf("%i",v2[i]);
    printf("\n\t vetor resultante");

    for (int i=0;i<5;i++){
        printf("%i",vr[i]);
   }
return 0;
}