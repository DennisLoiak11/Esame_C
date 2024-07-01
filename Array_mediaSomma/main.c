#include <stdio.h>
#define SIZE 5

int main() {
    int a[SIZE] = {0};
    int somma = 0;
    float media = 0;

    for (int i = 1; i < SIZE + 1; ++i) {
        printf("Inserisci un valore nella %d posizione: ", i);
        scanf("%d", &a[i]);
        somma += a[i];
        media = (float)somma/SIZE;
    }

    puts("");

    printf("\nLa somma è: %d", somma);
    printf("\nLa media è: %.1f", media);
}
