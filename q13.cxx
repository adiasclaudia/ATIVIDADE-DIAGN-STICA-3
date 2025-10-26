#include <stdio.h>

int main() {
    int m[3][3], i, j, somaLinha, maiorSoma = -99999, linhaMaior = -1;

    printf("Digite os 9 elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento m[%d][%d]: ", i + 1, j + 1); 
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nCalculando a soma de cada linha...\n");
    for (i = 0; i < 3; i++) {
        somaLinha = 0; 
        for (j = 0; j < 3; j++) somaLinha += m[i][j];

        if (somaLinha > maiorSoma) { maiorSoma = somaLinha; linhaMaior = i; }

        printf("Soma da Linha %d: %d\n", i + 1, somaLinha);
    }

    printf("\n============================================\n");
    printf("A linha com a MAIOR soma e a LINHA %d, com uma soma de %d.\n", linhaMaior + 1, maiorSoma);
    printf("============================================\n");

    return 0;
}
