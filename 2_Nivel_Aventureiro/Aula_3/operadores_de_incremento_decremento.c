#include <stdio.h>

int main() {
    // Criação das variáveis
    int num1 = 1, resultado;


    // Uso dos Operadores de Incremento e Decremento e output
    printf("Antes do incremento: %d\n", num1);

    resultado = num1++;
    printf("\nApós o Pós-incremento\n- Número: %d\n- Resultado: %d\n", num1, resultado);

    resultado = ++num1;
    printf("\nApós o Pré-incremento\n- Número: %d\n- Resultado: %d\n", num1, resultado);

    resultado = num1--;
    printf("\nApós o Pós-decremento\n- Número: %d\n- Resultado: %d\n", num1, resultado);

    resultado = --num1;
    printf("\nApós o Pré-incremento\n- Número: %d\n- Resultado: %d\n", num1, resultado);


    return 0;
}