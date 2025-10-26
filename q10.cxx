#include <stdio.h>

int main()
{
    int matriz[4][4];
    int linha, coluna;
    int maior;

    for (linha = 0; linha < 4; linha++)
    {
        for (coluna = 0; coluna < 4; coluna++)
        {
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    for (linha = 0; linha < 4; linha++)
    {
        maior = matriz[linha][0];

        for (coluna = 1; coluna < 4; coluna++)
        {
            if (matriz[linha][coluna] > maior)
            {
                maior = matriz[linha][coluna];
            }
        }

        printf("%d\n", maior);
    }

    return 0;
}
