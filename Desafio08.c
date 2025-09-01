#include <stdio.h>
int main() {
    float tabLab,avalSem,exameF;
    printf("digite a nota do sedddu trabalho de laboratorio");
    scanf("%f",&tabLab);
    printf("digite a nota da sua Avaliação semestral");
    scanf("%f",&avalSem);
    printf("digite a nota do seu Exame Final");
    scanf("%f",&exameF);

    float mediaPond;
    mediaPond=((2*tabLab)+(3*avalSem)+(5*exameF))/10;
    printf("%f\n", media);
    if (mediaPond<=10 && mediaPond>=8){
        printf("vc é conceito A");
    }
    if (mediaPond<=6 && mediaPond>8){
        printf("vc é conceito B");
    }
    if (mediaPond<=4 && mediaPond>2){
        printf("vc é conceito C");
    }
    if (mediaPond<=2 && mediaPond>0){
        printf("vc é conceito D");
    }
    return 0;

}