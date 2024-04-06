#include <stdio.h>

// Declaração e inicialização das variáveis globais
int a = 5;          // Variável do tipo int com valor 5
float num = 2.3;    // Variável do tipo float com valor 2.3
double d = 4.6;     // Variável do tipo double com valor 4.6
char ch = 't';      // Variável do tipo char com valor 't'

int main() {
    // Imprime o valor da variável 'a' como um número inteiro
    printf("O valor da variável 'a' é: %d\n", a);

    // Imprime o valor da variável 'num' com uma casa decimal
    printf("O valor da variável 'num' é: %.1f\n", num);

    // Imprime o valor da variável 'ch' como um caractere
    printf("O valor da variável 'ch' é: %c\n", ch);

    return 0; // Retorna 0 para indicar sucesso
}
