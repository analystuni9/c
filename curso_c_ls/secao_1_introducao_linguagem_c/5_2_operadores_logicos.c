#include <stdio.h>

int main() {
    int a; // Declaração da variável 'a' do tipo int
    
    // Solicita ao usuário que digite um número
    printf("Digite um número: ");
    
    // Lê o número digitado pelo usuário e armazena na variável 'a'
    scanf("%d", &a);

    // Verifica se 'a' é diferente de zero
    if (a != 0) {
        printf("A variável 'a' é diferente de 0"); // Se sim, imprime esta mensagem
    } else {
        printf("A variável 'a' é 0"); // Se não, imprime esta mensagem
    }

    return 0; // Retorna 0 para indicar sucesso
}
