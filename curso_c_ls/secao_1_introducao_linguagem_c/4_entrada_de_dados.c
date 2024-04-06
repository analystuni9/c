#include <stdio.h>

int main() {
    // Declaração da variável 'letra' do tipo char
    char letra;

    // Solicita ao usuário para digitar uma letra
    printf("\nDigite uma letra: ");
    
    // Lê a entrada do usuário e armazena na variável 'letra'
    scanf("%c", &letra);
    
    // Imprime o valor da variável 'letra'
    printf("O valor da variável 'letra' é: %c", letra);

    return 0; // Retorna 0 para indicar sucesso
}
