#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i, somaPares = 0, somaImpares = 0;

    printf("Quantos numeros voce quer? ");
    scanf("%d", &n);

    int v[n];
    int escolha;

    printf("Quer digitar (1) ou gerar aleatorio (2)? ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        for (i = 0; i < n; i++) {
            printf("Numero %d: ", i + 1);
            scanf("%d", &v[i]);
        }
    } else if (escolha == 2) {
        srand(time(NULL));
        for (i = 0; i < n; i++) {
            v[i] = rand() % 100;
        }
        printf("\nNumeros gerados:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", v[i]);
        }
        printf("\n");
    } else {
        printf("Escolha invalida.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        if (v[i] % 2 == 0)
            somaPares += v[i];
        else
            somaImpares += v[i];
    }

    printf("\nSoma dos pares: %d\n", somaPares);
    printf("Soma dos impares: %d\n", somaImpares);

    return 0;
}