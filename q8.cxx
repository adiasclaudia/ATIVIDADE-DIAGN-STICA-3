#include <stdio.h>

#define TAMANHO 10

int main() {
    int numeros[TAMANHO];
    int indiceMaior = 0;
    int indiceMenor = 0;
    
    printf("--- Pede 10 numeros e ve qual eh o maior e o menor, dizendo onde eles tao ---\n\n");

    for (int i = 0; i < TAMANHO; i++) {
        printf("Bota o %d numero ai: ", i + 1);
        if (scanf("%d", &numeros[i]) != 1) {
            printf("Ei! Tem que ser numero inteiro, po. Tenta de novo.\n");
            while (getchar() != '\n'); 
            i--;
            continue;
        }
    }
    
    for (int i = 1; i < TAMANHO; i++) {
        
        if (numeros[i] > numeros[indiceMaior]) {
            indiceMaior = i;
        }
        
        if (numeros[i] < numeros[indiceMenor]) {
            indiceMenor = i;
        }
    }
    
    printf("\n--- O que achamos ---\n");
    printf("O numero MAIOR (%d) ta na Casa (Indice): %d\n", numeros[indiceMaior], indiceMaior);
    printf("O numero MENOR (%d) ta na Casa (Indice): %d\n", numeros[indiceMenor], indiceMenor);
    printf("---------------------\n");

    return 0;
}
