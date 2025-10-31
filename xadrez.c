#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void moverBispo(int casas) {
    if(casas > 0) {
        printf("Cima/Direita\n");
        moverBispo(casas - 1);
    }
}

void moverTorre(int casas) {
    if(casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas) {
    if(casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}


int main() {
    // Nível Novato - Movimentação das Peças
    // --- Código simples para movimentar as peças ---.
   int bispo = 1;
    int rainha = 1;
    int movimentoCompleto = 1; 

    // Implementação de Movimentação do Bispo
    while (bispo <= 5)
    {
        printf("cima/direita\n", bispo);
        bispo++;

    }
    
    // Implementação de Movimentação da Torre
     for (int torre = 0; torre < 5; torre++)
    {
        printf("Direita\n");
    }
    
    // Implementação de Movimentação da Rainha
    do
    {
        printf("esquerda\n", rainha);
        rainha++;
    } while (rainha <= 8);
    
    // Nível Aventureiro - Movimentação do Cavalo

    while (movimentoCompleto--)
    {
        for (int cavalo = 0; cavalo < 2; cavalo++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
        
    } 
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    moverBispo(5);
    moverTorre(5);
    moverRainha(8);
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}