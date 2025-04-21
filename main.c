#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicialitzem el generador de nombres aleatoris
    srand(time(NULL));

    // Generem un nombre aleatori entre 0 i 99
    int nombreAleatori = rand() % 100;

    // Imprimim el nombre aleatori
    printf("El nombre aleatori generat és: %d\n", nombreAleatori);

    return 0;
}
