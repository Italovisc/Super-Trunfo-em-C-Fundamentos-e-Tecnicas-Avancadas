#include <stdio.h>

int main() {
    // Declaração de variáveis envolvendo produto, preço, quantidade e estoque
    char produtoA[30] = "A";
    char produtoB[30] = "B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA = estoqueA * valorA;
    double valorTotalB = estoqueB * valorB;

    int resultadoA = estoqueA > estoqueMinimoA;
    int resultadoB = estoqueB > estoqueMinimoB;


    // Output de dados dos produtos
    printf("Produto %s tem estoque %u e o valor unitário é R$%.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitário é R$%.2f\n", produtoB, estoqueB, valorB);


    printf("\nProduto %s tem estoque mínimo de %d\n", produtoA, resultadoA);
    printf("Produto %s tem estoque mínimo de %d\n", produtoB, resultadoB);


    printf("\nProduto %s tem o valor total de %.2f\n", produtoA, valorTotalA);
    printf("Produto %s tem o valor total de %.2f\n", produtoB, valorTotalB);


    printf("\nO valor total de A (R$%.2f) é maior do que o valor total de B (R$%.2f): %d\n", valorTotalA, valorTotalB, valorTotalA > valorTotalB);


    return 0;
}