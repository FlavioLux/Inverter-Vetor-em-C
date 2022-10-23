#include <stdio.h>
#define N 5
int main() {
    int vetOriginal[N], vetInvert[N];
    int i;
    for(i = 0; i < N; i++) {
        printf("Digite um número!\n");
        scanf("%d", &vetOriginal[i]);
    }
    printf("O vetor invertido é :\n");
    for(i = 0; i < N; i++) {
        vetInvert[i] = vetOriginal[N-i-1];
        printf("%d ,", vetInvert[i]);
    }
    return 0;
    }
