#include <stdio.h>
#define SIZE 10

int main() {
    int a[SIZE] = {0};
    int min;
    int max;
    int count = 0;

    for (int i = 0; i < SIZE; ++i) {
        printf("Inserisci un valore nella %d posizione: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nDefinisci il valore minimo: ");
    scanf("%d", &min);
    printf("\nDefinisci il valore massimo: ");
    scanf("%d", &max);

    for (int i = 0; i < SIZE; ++i) {
        if((a[i] <= max) && (a[i] >= min)){
            count++;
        }
    }
    printf("I valori compresi tra %d e %d sono: %d", min, max, count);
}
