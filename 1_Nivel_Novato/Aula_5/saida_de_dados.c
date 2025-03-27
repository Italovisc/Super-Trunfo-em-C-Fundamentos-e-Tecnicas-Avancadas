#include <stdio.h>

int main() {
    int idade = 20;
    float altura = 1.80;
    char opcao = 'I';
    char nome[] = "Italo";

    printf("O nome é: %s\n", nome);
    printf("A idade é: %d\n", idade);
    printf("A altura é: %.2f\n", altura);
    printf("A opção é: %c\n", opcao);

    return 0;
}