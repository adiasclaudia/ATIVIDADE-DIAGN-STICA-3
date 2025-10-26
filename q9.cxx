#include <stdio.h>

int main() {
    int numeros[8];
    int i, j, temp;

    printf("Digite 8 numeros:\n");
    for (i = 0; i < 8; i++) {
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 7; i++) {
        for (j = i + 1; j < 8; j++) {
            if (numeros[i] < numeros[j]) {
                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    printf("Numeros em ordem decrescente:\n");
    for (i = 0; i < 8; i++) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
