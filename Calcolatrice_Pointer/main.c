#include <stdio.h>

double somma(double a, double b);
double sottrazione(double a, double b);
double moltiplicazione(double a, double b);
double divisione(double a, double b);

int main() {
    double num1;
    double num2;
    double risultato;
    int scelta;

    double (*operazioni[4])(double, double) = {somma, sottrazione, moltiplicazione, divisione};

    printf("Inserisci il primo numero: ");
    scanf("%lf", &num1);

    printf("Inserisci il secondo numero: ");
    scanf("%lf", &num2);

    printf("\nSeleziona un'operazione:\n");
    printf("1. Somma\n");
    printf("2. Sottrazione\n");
    printf("3. Moltiplicazione\n");
    printf("4. Divisione\n");
    printf("Scelta: ");
    scanf("%d", &scelta);

    if (scelta < 1 || scelta > 4) {
        printf("Scelta non valida.\n");
        return 1;
    }

    risultato = operazioni[scelta - 1](num1, num2);

    printf("Risultato: %.2f\n", risultato);

    return 0;
}

double somma(double a, double b) {
    return a + b;
}

double sottrazione(double a, double b) {
    return a - b;
}

double moltiplicazione(double a, double b) {
    return a * b;
}

double divisione(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Errore: divisione per zero.\n");
        return 0.0;
    }
}
