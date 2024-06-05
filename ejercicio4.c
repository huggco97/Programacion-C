#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

// prototipos
void cargar_matriz(int[TAM][TAM]);
void imprimir_matriz(int[TAM][TAM]);
int buscar_camino(int[TAM][TAM]); // 1 o 0

int matriz[TAM][TAM];
int main()
{
    // imprimir_matriz(matriz);
    while (1) {
        cargar_matriz(matriz);
        if (buscar_camino(matriz)) {
            imprimir_matriz(matriz);
            break;
        }
    }
    return 0;
}

void cargar_matriz(int m[TAM][TAM])
{
    int x, y;
    srand(time(NULL));
    for (x = 0; x < TAM; x++) {
        for (y = 0; y < TAM; y++) {
            m[x][y] = rand() % 2;
        }
    }
}

void imprimir_matriz(int m[TAM][TAM])
{
    for (int x = 0; x < TAM; x++) {
        for (int y = 0; y < TAM; y++) {
            printf(" | %d", m[x][y]);
        }
        printf("\n");
    }
}

int buscar_camino(int ma[TAM][TAM])
{
    return 1;
}
