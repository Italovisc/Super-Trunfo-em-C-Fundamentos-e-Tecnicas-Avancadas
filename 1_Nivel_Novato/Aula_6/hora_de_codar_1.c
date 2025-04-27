#include <stdio.h>
#include <string.h>

int main() {
    int idade;
    float altura;
    char nome[50], matricula[20];

    printf("Digite sua matricula: ");
    scanf("%s", matricula);
    getchar();

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("\n- Matrícula: %s\n- Nome: %s\n- Idade: %d\n- Altura: %.2f\n", matricula, nome, idade, altura);

    return 0;
}