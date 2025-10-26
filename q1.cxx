/*/Faça um programa em C que solicite ao usuário que 
digite uma palavra e armazene em uma variável string simples. 
Verifique quantas vogais e quantas consoantes tem na palavra digitada.
DICA = você pode utilizar funções próprias da linguagem usando a 
biblioteca string.h e/ou ctype.h
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
char palavra[100];
int vogais = 0, consoantes = 0;
printf ("Escreva nomes de animais: ");
scanf ("%s", palavra);
for (int i = 0; i<strlen(palavra); i++) {
    char letra = tolower(palavra[i]);
    if (isalpha(letra)) {
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            vogais++;
        } else {
            consoantes++;
        }   
    }
}
printf ("A palavra %s tem %d vogais e %d consoantes.\n", palavra, vogais, consoantes);
return 0;
}