
#include <stdio.h>

#define TAM 10  // Tamanho do tabuleiro

int main() {
    int tabuleiro[TAM][TAM] = {0}; // Inicializa o tabuleiro com 0

    // Coordenadas do navio vertical (tamanho 3)
    int x1 = 2, y1 = 4;
    for (int i = 0; i < 3; i++) {
        tabuleiro[x1 + i][y1] = 1;
    }

    // Coordenadas do navio horizontal (tamanho 4)
    int x2 = 6, y2 = 1;
    for (int i = 0; i < 4; i++) {
        tabuleiro[x2][y2 + i] = 2;
    }

    // Exibe coordenadas do navio vertical
    printf("Coordenadas do Navio Vertical:\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", x1 + i, y1);
    }

    // Exibe coordenadas do navio horizontal
    printf("\nCoordenadas do Navio Horizontal:\n");
    for (int i = 0; i < 4; i++) {
        printf("(%d, %d)\n", x2, y2 + i);
    }

    return 0;
}
