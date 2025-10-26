#include <stdio.h>

int main() {
    int matriz[4][4];
    int somaDiagonal = 0;
    int i, j;

    printf("--- Leitura de uma Matriz 4x4 ---\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite o elemento da posicao [%d][%d]: ", i, j);
            if (scanf("%d", &matriz[i][j]) != 1) {
                printf("Entrada invalida. Encerrando o programa.\n");
                return 1;
            }
        }
    }

    for (i = 0; i < 4; i++) {
        somaDiagonal += matriz[i][i];
    }

    printf("\n--- Matriz Lida ---\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Resultado ---\n");
    printf("A soma dos elementos da diagonal principal e: %d\n", somaDiagonal);

    return 0;
}
