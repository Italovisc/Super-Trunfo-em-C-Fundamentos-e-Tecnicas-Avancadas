#include <stdio.h>

int main() {
    // Declaração de variáveis
    float n1, n2, n3;


    // Input de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);


    // Cálculo das notas
    float soma = n1 + n2 + n3;
    float resultado = soma / 3;


    // Output de dados
    printf("\nSua média de notas é: %.1f", resultado);


    return 0;
}