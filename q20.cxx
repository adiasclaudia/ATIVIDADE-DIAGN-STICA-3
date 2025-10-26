#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char palavra[MAX];
    int n1, i, eh_palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    n1 = strlen(palavra);

    for (i = 0; i < n1 / 2; i++) {
        if (palavra[i] != palavra[n1 - 1 - i]) {
            eh_palindromo = 0;
            break;
        }
    }

    if (eh_palindromo) {
        printf("\nA palavra '%s' E UM PALINDROMO.\n", palavra);
    } else {
        printf("\nA palavra '%s' NAO E UM PALINDROMO.\n", palavra);
    }

    return 0;
}
