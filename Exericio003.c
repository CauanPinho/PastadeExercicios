
#include <stdio.h>
#include <string.h>
/*salário reajustado ou uma mensagem caso o funcionário não tenha direito ao aumento.
3) Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é
um conjunto de caracteres que são: 'ASDFG'. O programa deve imprimir mensagem de
permissão ou negação de acesso.*/

int main() {
    //declaração
    char senha[20];
    //entrada de dados
    printf("Entre com a senha");
    scanf("%s", senha);
    //processamento saída
    if(strcmp(senha,"ASDFG") == 0) {
        printf("Acesso permitido");

    }
    else
        printf("Acesso negado");

return 0;

}
