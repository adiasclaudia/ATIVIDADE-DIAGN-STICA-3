#include <stdio.h>

#define T 10

int main() {
    int n[T];
    int i, j;
    int c; 

    printf("Manda 10 numeros ai:\n");
    for (i = 0; i < T; i++) {
        scanf("%d", &n[i]);
    }

    printf("\nOs que nao repetem sao:\n");

    for (i = 0; i < T; i++) {
        c = 0;

        for (j = 0; j < T; j++) {
            if (n[i] == n[j]) {
                c++;
            }
        }

        if (c == 1) {
            printf("%d\n", n[i]);
        }
    }

    return 0;
}
