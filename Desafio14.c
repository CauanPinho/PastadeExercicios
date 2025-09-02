#include <stdio.h>



int main(){
    int cargo;
    printf("qual é o cgd do teu cargo?");
    scanf("%d",&cargo);
    float salario;
    printf("digite seu salario");
    scanf("%f",&salario);
    if (cargo==1){
        printf("Seu cargo é de escrituário, parabens vc tera um novo salario, :");
        float novosalario;
        novosalario=(salario*150/100);
        printf("o valor do seu novo salario %f",novosalario);
    }
    if (cargo==2){
        printf("Seu cargo é de secretario, parabens vc tera um novo salario, ");
        float novosalario;
        novosalario=(novosalario*135/100);
        printf("o valor do seu novo salario %f",novosalario);
    }
    if (cargo==3){
        printf("cargo é de caixa, parabens vc tera um novo salario, :");
        float novosalario;
        novosalario=(salario*120/100);
        printf("o valor do seu novo salario %f",novosalario);
    }
    if (cargo==4){
        printf("Seu cargo é de gerente, parabens vc tera um novo salario, :");
        float novosalario;
        novosalario=((salario*110/100));
        printf("o valor do seu novo salario %.2f",novosalario);
    }
    if (cargo==5){
        printf("Seu cargo n te da direito a nada, sai!");
    }



return 0;
}