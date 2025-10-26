
#include <stdio.h>

int main() {
    int n1, invertido = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);

    while (n1 != 0) {
        invertido = invertido * 10 + (n1 % 10);
        n1 /= 10;
    }

    printf("Numero invertido: %d\n", invertido);

    return 0;
}