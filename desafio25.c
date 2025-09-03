/*Escreva um programa que calcule o que deve ser pago por um produto, considerando o
preço normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela
a seguir para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado:*/
#include <stdio.h>
int main(){
    int produto,codigo,preco;
    printf("digite o valor do seu produto");
    scanf("%d",&produto);
    printf("digite a sua forma de pagamento [1]pix\n [2]credito avista,\n [3]até 2x sem juros\n [4]até 3x\n");
    scanf("%d",&codigo);
    
    switch (codigo){
        case 1:
        preco=(produto -(produto * 10/100));
        printf("o novo preço do seu produto é %d",preco);
        case 2:
        preco=(produto -(produto * 5/100));
        printf("o novo preço do seu produto é %d",preco);
        case 3:
        printf("o preço do seu produto continua o mesmo");
        case 4:
        preco=(produto +(produto * 10/100));
        printf("o novo preço do seu produto é %d",preco);
    }
return 0;
}

