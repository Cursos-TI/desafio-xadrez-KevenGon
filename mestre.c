#include <stdio.h>

#define TORRE_MOVES 5 // Número de casas que a torre pode se mover
#define BISPO_MOVES 5 // Número de casas que o bispo pode se mover
#define RAINHA_MOVES 8 // Número de casas que a rainha pode se mover
#define CAVALO_MOVES 2 // Número de casas que o cavalo pode se mover para cima

// Função recursiva para mover a Torre
void moverTorreRecursivo(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreRecursivo(casas - 1);
}

// Função recursiva para mover o Bispo
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função recursiva para mover a Rainha
void moverRainhaRecursivo(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainhaRecursivo(casas - 1);
}

// Função que implementa o movimento do Cavalo usando loops aninhados
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < CAVALO_MOVES; i++) {
        printf("Cima\n");
    }
    for (int j = 0; j < 1; j++) {
        printf("Direita\n");
    }
}

// Função que implementa o movimento do Bispo usando loops aninhados
void moverBispoLoopsAninhados(int casas) {
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    for (int i = 0; i < casas; i++) {
        printf("Cima\n");
        for (int j = 0; j < casas; j++) {
            printf("Direita\n");
        }
    }
}

// Função principal
int main() {
    // Chamada das funções
    printf("\nMovimento da Torre:\n");
    moverTorreRecursivo(TORRE_MOVES);

    // Chamada das funções
    printf("\nMovimento do Bispo:\n");
    moverBispoRecursivo(BISPO_MOVES);
    // Chamada das funções
    printf("\nMovimento da Rainha:\n");
    moverRainhaRecursivo(RAINHA_MOVES);
    
    // Chamada das funções
    moverCavalo();
    
    // Chamada das funções
    moverBispoLoopsAninhados(BISPO_MOVES);

    return 0;
}