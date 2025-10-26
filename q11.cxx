#include <stdio.h>
#define T 10
#define L 100 
#define M 1 

int main(){
int v[T];
int f[L+1]={0};
int i, x;

printf("DIGITE DEZ NUMEROS (DE UM A CEM):\n");

for(i=0; i<T; i++){
printf("num %d: ", i+1);

while(scanf("%d", &x) != 1 || x < M || x > L){
printf("ERRO. so de 1 a 100\n");
while(getchar() != '\n'); 
printf("de novo num %d: ", i+1);
}

v[i] = x;
f[x]++;
}

printf("\nRESULTADO:\n");

int ja_foi[L+1] = {0}; 

for(i=0; i<T; i++){
x = v[i];

if(ja_foi[x] == 0){
printf("O numero %d apareceu %d vez(es).\n", x, f[x]);
ja_foi[x] = 1;
}
}

return 0;
}
