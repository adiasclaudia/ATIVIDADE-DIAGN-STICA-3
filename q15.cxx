#include <stdio.h>

#define T 5

int main() {
    int m[T][T];
    int l, c;
    const int centro = T / 2;
    
    for (l = 0; l < T; l++) {
        for (c = 0; c < T; c++) {
            if (l == centro || c == centro) {
                m[l][c] = 1;
            } else {
                m[l][c] = 0;
            }
        }
    }

    printf("Matriz resultante:\n");
    for (l = 0; l < T; l++) {
        for (c = 0; c < T; c++) {
            printf("%d ", m[l][c]);
        }
        printf("\n");
    }

    return 0;
}
