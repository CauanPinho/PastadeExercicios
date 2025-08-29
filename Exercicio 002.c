#include <stdio.h>
/*Uma empresa decide dar um aumento de 30% aos funcionários cujo salário é inferiora 500
reais. Escreva um programa que receba o salário de um funcionário e imprima o valor do
salário reajustado ou uma mensagem caso o funcionário não tenha direito ao aumento*/
int main() {
    float salario,NovoSalario;
    printf("qual seu salario?",salario);
    scanf("%f",&salario);
    if (salario<=500){
            NovoSalario =(salario*30/100);
            printf("Seu novo salario é: %4f",NovoSalario);
    }
    else{
        printf("Parabens vc n ganhou foi nada");
    }
}

