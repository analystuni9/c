#include <stdio.h>

// Função para realizar a soma entre dois números
int soma(int a, int b) {
    int s = a + b; // Calcula a soma de 'a' e 'b'
    return s; // Retorna o resultado da soma
}

// Função para realizar a subtração entre dois números
int sub(int a, int b) {
    int s = a - b; // Calcula a diferença de 'a' e 'b'
    return s; // Retorna o resultado da subtração
}

int main() {
    int n1, n2, op, res;
    int fim = 0; // Variável para controlar o fim do programa

    // O loop continua enquanto 'fim' for igual a 0
    while (fim == 0) {
        printf("\nDigite um valor: ");
        scanf("%d", &n1); // Lê o primeiro valor

        printf("Digite um valor: ");
        scanf("%d", &n2); // Lê o segundo valor

        // Solicita ao usuário que escolha a operação
        printf("\nEscolha a operação:\n1 - Adição\n2 - Subtração\n");
        scanf("%d", &op); // Lê a escolha do usuário

        // Executa a operação correspondente com base na escolha do usuário
        if (op == 1) {
            res = soma(n1, n2); // Chama a função soma() para realizar a adição
        } else if (op == 2) {
            res = sub(n1, n2); // Chama a função sub() para realizar a subtração
        }

        // Imprime o resultado da operação
        printf("O resultado é: %d\n", res);

        // Pergunta ao usuário se deseja continuar ou parar o programa
        printf("\n0 - Continuar\n1 - Parar\n");
        scanf("%d", &fim); // Lê a escolha do usuário

        // Se o usuário escolheu parar, o loop será interrompido e o programa terminará
    }

    return 0; // Retorna 0 para indicar sucesso
}
