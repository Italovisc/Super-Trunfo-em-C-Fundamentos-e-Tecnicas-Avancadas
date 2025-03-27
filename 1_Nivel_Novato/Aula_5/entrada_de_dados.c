#include <stdio.h>

int main() {
    int idade;
    float altura;
    char opcao;
    char nome[20];

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);

    printf("\nDigite sua altura: ");
    scanf("%f", &altura);
    printf("Sua altura é: %.2f\n", altura);

    printf("\nDigite uma letra: ");
    scanf(" %c", &opcao);
    printf("Sua opção é: %c\n", opcao);

    printf("\nDigite seu nome: ");
    scanf(" %s", nome);
    printf("Seu nome é: %s\n", nome);

    return 0;
}