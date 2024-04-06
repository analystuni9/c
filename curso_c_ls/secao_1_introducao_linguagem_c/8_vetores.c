#include <stdio.h>

int v[4];     // Declaração de um array de inteiros com 4 elementos
float v1[3];  // Declaração de um array de floats com 3 elementos

int main() {
    // Inicialização dos elementos do array v
    v[0] = 45;
    v[1] = 78;
    v[2] = 9;
    v[3] = 5;

    // Loop para ler os valores e armazená-los no array v1
    for(int i = 0; i < 3; i++) {
        printf("Digite um valor: ");
        scanf("%f", &v1[i]); // Lê um valor float e o armazena no array v1
    }

    // Loop para imprimir os valores do array v1
    for(int i = 0; i < 3; i++) {
        printf("\nO valor de v1[%d] = %.1f", i, v1[i]); // Imprime o valor do elemento i do array v1 com uma casa decimal
    }

    return 0; // Retorna 0 para indicar sucesso
}
