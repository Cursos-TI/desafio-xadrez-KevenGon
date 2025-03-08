// Nível Novato + Aventureiro 

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