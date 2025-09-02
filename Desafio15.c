#include <stdio.h>
#include <math.h>

int main() {
    int opcao;
    float n1, n2, n;

    printf("=== MENU ===\n");
    printf("1 - Soma\n");
    printf("2 - Raiz quadrada\n");
    printf("3 - Finalizar\n");

    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Digite o primeiro número: ");
        scanf("%f", &n1);
        printf("Digite o segundo número: ");
        scanf("%f", &n2);
        printf("Resultado da soma: %.2f\n", n1 + n2);
    }
    else if (opcao == 2) {
        printf("Digite um número: ");
        scanf("%f", &n);
        if (n < 0) {
            printf("Não é possível calcular a raiz quadrada de número negativo.\n");
        } else {
            float raiz=sqrt(n);
            printf("Raiz quadrada: %f",raiz);
        }
    }
    else if (opcao == 3) {
        printf("Programa finalizado.\n");
    }
    else {
        printf("Opção inválida.\n");
    }

    return 0;
}
