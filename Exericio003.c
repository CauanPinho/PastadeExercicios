
#include <stdio.h>
#include <string.h>
/*sal�rio reajustado ou uma mensagem caso o funcion�rio n�o tenha direito ao aumento.
3) Fa�a um programa que verifique a validade de uma senha fornecida pelo usu�rio. A senha �
um conjunto de caracteres que s�o: 'ASDFG'. O programa deve imprimir mensagem de
permiss�o ou nega��o de acesso.*/

int main() {
    //declaração
    char senha[20];
    //entrada de dados
    printf("Entre com a senha");
    scanf("%s", senha);
    //processamento sa�da
    if(strcmp(senha,"ASDFG") == 0) {
        printf("Acesso permitido");

    }
    else
        printf("Acesso negado");

return 0;

}
