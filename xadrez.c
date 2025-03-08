// Nivel Novato

#include <stdio.h>

#define TORRE_MOVES 5 // Número de casas que a torre pode se mover
#define BISPO_MOVES 5 // Número de casas que o bispo pode se mover
#define RAINHA_MOVES 8 // Número de casas que a rainha pode se mover

void moverTorre(int casas) { // Função que recebe o número de casas que a torre pode se mover
    printf("Movimento da Torre:\n"); // Imprime a mensagem de movimento da torre
    for (int i = 0; i < casas; i++) { // Loop que executa o número de casas que a torre pode se mover
        printf("Direita\n"); // Imprime a mensagem de movimento para a direita
    }
}

void moverBispo(int casas) { // Função que recebe o número de casas que o bispo pode se mover
    printf("Movimento do Bispo:\n"); // Imprime a mensagem de movimento do bispo
    int i = 0; // Variável de incremento
    while (i < casas) { // Loop que executa o número de casas que o bispo pode se mover
        printf("Cima, Direita\n"); // Imprime a mensagem de movimento para cima e para a direita
        i++; // Incrementa a variável de incremento
    }
}

void moverRainha(int casas) { // Função que recebe o número de casas que a rainha pode se mover
    printf("Movimento da Rainha:\n"); // Imprime a mensagem de movimento da rainha
    int i = 0; // Variável de incremento
    do { // Loop que executa o número de casas que a rainha pode se mover
        printf("Esquerda\n"); // Imprime a mensagem de movimento para a esquerda
        i++; // Incrementa a variável de incremento
    } while (i < casas); // Condição do loop
}

int main() {
    moverTorre(TORRE_MOVES); // Chama a função moverTorre passando o número de casas que a torre pode se mover
    moverBispo(BISPO_MOVES); // Chama a função moverBispo passando o número de casas que o bispo pode se mover
    moverRainha(RAINHA_MOVES); // Chama a função moverRainha passando o número de casas que a rainha pode se mover
    return 0;
    
}

// Nivel Aventureiro 

#include <stdio.h>

#define TORRE_MOVES 5 // Número de casas que a torre pode se mover
#define BISPO_MOVES 5 // Número de casas que o bispo pode se mover
#define RAINHA_MOVES 8 // Número de casas que a rainha pode se mover
#define CAVALO_MOVES 2 // Número de casas que o cavalo pode se mover para baixo

void moverTorre(int casas) { // Função que recebe o número de casas que a torre pode se mover
    printf("\nMovimento da Torre:\n"); // Imprime a mensagem de movimento da torre
    for (int i = 0; i < casas; i++) { // Loop que executa o número de casas que a torre pode se mover
        printf("Direita\n"); // Imprime a mensagem de movimento para a direita
    }
}

void moverBispo(int casas) { // Função que recebe o número de casas que o bispo pode se mover
    printf("\nMovimento do Bispo:\n"); // Imprime a mensagem de movimento do bispo
    int i = 0; // Variável de incremento
    while (i < casas) { // Loop que executa o número de casas que o bispo pode se mover
        printf("Cima, Direita\n"); // Imprime a mensagem de movimento para cima e para a direita
        i++; // Incrementa a variável de incremento
    }
}

void moverRainha(int casas) { // Função que recebe o número de casas que a rainha pode se mover
    printf("\nMovimento da Rainha:\n"); // Imprime a mensagem de movimento da rainha
    int i = 0; // Variável de incremento
    do { // Loop que executa o número de casas que a rainha pode se mover
        printf("Esquerda\n"); // Imprime a mensagem de movimento para a esquerda
        i++; // Incrementa a variável de incremento
    } while (i < casas); // Condição do loop
}

void moverCavalo() { // Função que implementa o movimento do Cavalo
    printf("\nMovimento do Cavalo:\n"); // Imprime a mensagem de movimento do cavalo
    for (int i = 0; i < CAVALO_MOVES; i++) { // Loop que executa o movimento para baixo
        printf("Baixo\n"); // Imprime a mensagem de movimento para baixo
    }
    int j = 0;
    while (j < 1) { // Loop que executa o movimento para a esquerda
        printf("Direita\n"); // Imprime a mensagem de movimento para a esquerda
        j++; // Incrementa a variável de incremento
    }
}

int main() {
    moverTorre(TORRE_MOVES); // Chama a função moverTorre passando o número de casas que a torre pode se mover
    moverBispo(BISPO_MOVES); // Chama a função moverBispo passando o número de casas que o bispo pode se mover
    moverRainha(RAINHA_MOVES); // Chama a função moverRainha passando o número de casas que a rainha pode se mover
    moverCavalo(); // Chama a função moverCavalo para executar o movimento do Cavalo
    return 0;
}

// Nivel Mestre

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

