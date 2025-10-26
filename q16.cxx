#include <stdio.h>

int main() {
    int m[3][3], s, i, j, ok = 1;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &m[i][j]);

    s = m[0][0] + m[0][1] + m[0][2];

    for (i = 0; i < 3; i++) {
        int sl = 0;
        for (j = 0; j < 3; j++) sl += m
        