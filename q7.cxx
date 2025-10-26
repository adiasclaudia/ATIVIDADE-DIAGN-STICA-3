#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define T 50

int main() {
    int v[T];
    int u[T];
    int tam_u = 0;
    int i, j;
    int existe; // 'existe' agora é int (0 é falso, 1 é verdadeiro)

    srand(time(NULL));
    for (i = 0; i < T; i++) {
        v[i] = rand() % 100;
    }

    printf("Vetor Original = [");
    for (i = 0; i < T; i++) {
        printf("%d", v[i]);
        if (i < T - 1) {
            printf(", ");
        }
    }
    printf("]\n\n");

    for (i = 0; i < T; i++) {
        existe = 0; // Falso (0)

        for (j = 0; j < tam_u; j++) {
            if (v[i] == u[j]) {
                existe = 1; // Verdadeiro (1)
                break;
            }
        }

        if (existe == 0) { // Se for Falso
            u[tam_u] = v[i];
            tam_u++;
        }
    }

    printf("Vetor de Numeros Unicos = [");
    for (i = 0; i < tam_u; i++) {
        printf("%d", u[i]);
        if (i < tam_u - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
