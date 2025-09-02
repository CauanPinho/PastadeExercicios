#include <stdio.h>

int main(){
    int acum=0;
    int i;
    printf("insira um valor");
    for (int i=0;i<10;i++) {
        printf("Contador é %d",i);
        scanf("%d",&acum);
        acum+=1;
        printf("acumulador é %d",acum);
    }
    for(;;);
    printf("isso é um laço");
    return 0;
    }

