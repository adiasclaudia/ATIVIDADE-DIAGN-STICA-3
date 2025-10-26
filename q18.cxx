#include <stdio.h>
#include <string.h> 

int main() {
    char palavra1[50]; 
    char palavra2[50]; 

    printf("Digite a primeira palavra, aí: ");
    scanf("%s", palavra1); 

    printf("E agora a segunda: ");
    scanf("%s", palavra2);

    if (strcmp(palavra1, palavra2) == 0) {
        printf("\nAs  palavras \"%s\" e \"%s\" são IGUAIS!\n", palavra1, palavra2);
    } else {
        printf("\nAs palavras \"%s\" e \"%s\" são DIFERENTES.\n", palavra1, palavra2);
    }

    return 0;
} 
