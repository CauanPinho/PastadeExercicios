#include <stdio.h>

int main(){
    int idade;
    printf("qual a idade do teu nenem");
    scanf("%d",&idade);

    if (idade >0 && idade<=2){
        printf("Recém-nascido");
    }
    if (idade >=11 && idade<=11){
        printf("criança");
    }
    if (idade >=12 && idade<=19){
        printf("adolescente");
    }
    if (idade >=20 && idade<=55){
        printf("adulto");
    }
    if (idade>=55){
        printf("idoso");
    }
return 0;
}