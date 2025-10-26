#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1;
    int cont = 0;
    
    printf("Digite um numero positivo inteiro: "); 
    scanf("%d", &n1);

    if (n1 < 0) {
        n1 = n1 * -1;
    }

    if (n1 == 0) {
        cont = 1;
    } else {
        int copia = n1;
        
        while (copia > 0) {
            copia = copia / 10;
            cont++;
        }
    }

    printf("\nO numero %d tem %d digitos. Feito.\n", n1, cont);

    return 0;
}
