#include <stdio.h>
/*Uma empresa decide dar um aumento de 30% aos funcion�rios cujo sal�rio � inferiora 500
reais. Escreva um programa que receba o sal�rio de um funcion�rio e imprima o valor do
sal�rio reajustado ou uma mensagem caso o funcion�rio n�o tenha direito ao aumento*/
int main() {
    float salario,NovoSalario;
    printf("qual seu salario?",salario);
    scanf("%f",&salario);
    if (salario<=500){
            NovoSalario =(salario*30/100);
            printf("Seu novo salario �: %4f",NovoSalario);
    }
    else{
        printf("Parabens vc n ganhou foi nada");
    }
}

