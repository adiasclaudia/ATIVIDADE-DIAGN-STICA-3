#include <stdio.h>

int main() {
    float n1;
    
    printf("Digite um numero: ");
    
    scanf("%f", &n1);
    
    if (n1 > 0) {
        printf("O numero e positivo!\n");
    } else if (n1 < 0) {
        printf("O numero e negativo, que coisa.\n");
    } else {
        printf("Aha! O numero e zero. Neutro, saca?\n");
    }
    
    return 0;
}
