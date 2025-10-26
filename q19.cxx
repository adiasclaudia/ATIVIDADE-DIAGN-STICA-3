#include <stdio.h>

int main() {
    char p[100];
    int c = 0;
    int i;

    printf("Escreve uma palavra ai: ");
    scanf("%s", p);
    
    for (i = 0; p[i] != '\0'; i++) {
        if (p[i] == 'a') {
            c++;
        }
    }

    printf("Tem %d 'a's.\n", c);

    return 0;
}
