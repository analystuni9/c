#include <stdio.h>

int mat[2][3];  // Declaração de uma matriz de inteiros com 2 linhas e 3 colunas

int main() {
    // Loop aninhado para iterar sobre todas as células da matriz
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Digite um número: ");
            scanf("%d", &mat[i][j]); // Lê um número e o armazena na célula correspondente da matriz
        }
    }

    // Loop aninhado para imprimir todos os valores armazenados na matriz
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("\nO valor de mat[%d][%d] = %d ", i, j, mat[i][j]); // Imprime o valor da célula
        }
    }

    return 0; // Retorna 0 para indicar sucesso
}
