#include <stdio.h>

int main() {
    // Criação das variáveis
    int num1, num2;
    int soma, subtracao, multiplicacao, divisao;


    // Input de dados
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);


    // Criação dos operadores matemáticos
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;


    // Output de dados
    printf("\nA soma dos números é: %d", soma);
    printf("\nA subtração dos números é: %d", subtracao);
    printf("\nA multiplicação dos números é: %d", multiplicacao);
    printf("\nA divisão dos números é: %d", divisao);


    return 0;
}