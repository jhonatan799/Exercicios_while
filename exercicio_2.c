#include <stdio.h>

int main() {
    int n, fat = 1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    int i = n;
    while (i > 1) {
        fat *= i;
        i--;
    }
    printf("Fatorial de %d = %d\n", n, fat);
    return 0;
}
