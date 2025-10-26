#include <stdio.h>

int main() {
    int n1, n2, i;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Escreva o segundo numero: ");
    scanf("%d", &n2);
    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    printf("Numeros entre %d e %d:\n", n1, n2);
    for (i = n1 + 1; i < n2; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}