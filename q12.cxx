#include <stdio.h>

#define T 5

int main() {
    int v1[T], v2[T], i;
    int pe = 0; // pe = Produto Escalar
    
    printf("Digite 5 valores para o Vetor 1:\n");
    for (i = 0; i < T; i++) {
        printf("v1[%d]: ", i);
        scanf("%d", &v1[i]);
    }
    
    printf("\nDigite 5 valores para o Vetor 2:\n");
    for (i = 0; i < T; i++) {
        printf("v2[%d]: ", i);
        scanf("%d", &v2[i]);
        
        // CÁLCULO DIRETO NO SEGUNDO LAÇO
        pe += v1[i] * v2[i]; 
    }
    
    printf("\nO Produto Escalar e: %d\n", pe);
    
    return 0;
}
