// Incluí a biblioteca string.h para usar a função strcspn, possibilitando a leitura de cidades de nome composto
#include <stdio.h>
#include <string.h>



int main() {
    // Declaração de variáveis
    // OBS: apesar das regras dizerem que a população tem que estar em INT, usei CHAR para u output melhor, segue exemplo:
    // Usando INT, ficaria, por exemplo: 1000000 habitantes. Enquanto com CHAR, fica: 1.000.000 habitantes
    // Logo, achei melhor usar CHAR para melhorar a visualização do output
    char estado[] = "A", codigo[] = "A01", cidade[20], populacao[25];
    char estado2[] = "B", codigo2[] = "B02", cidade2[20], populacao2[25];

    int pontos_turisticos;
    int pontos_turisticos2;

    float pib, area;
    float pib2, area2;



    // Coleta dos dados da carta 1
    // OBS: usei fgets para ler o nome da cidade, pois a função scanf não lê strings com espaços
    // OBS2: getchar() é usado para limpar o buffer do teclado, evitando que o próximo scanf leia o \n que ficou no buffer
    printf("Digite o nome da cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Digite a população da cidade: ");
    scanf("%s", populacao);
    getchar();

    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos);
    getchar();



    // Coleta dos dados da carta 2
    // OBS: também usei fgets para ler o nome da cidade 2
    printf("\nDigite o nome da cidade 2: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite a população da cidade 2: ");
    scanf("%s", populacao2);
    getchar();

    printf("Digite a área da cidade 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade 2: ");
    scanf("%d", &pontos_turisticos2);



    // Output das cartas
    printf("\nCarta 1\n- Estado: %s\n- Código: %s\n- Cidade: %s\n- População: %s habitantes\n- Área: %.2f km²\n- PIB: %.2f bilhões\n- Pontos Turísticos: %d\n", estado, codigo, cidade, populacao, area, pib, pontos_turisticos);

    printf("\nCarta 2\n- Estado: %s\n- Código: %s\n- Cidade: %s\n- População: %s habitantes\n- Área: %.2f km²\n- PIB: %.2f bilhões\n- Pontos Turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontos_turisticos2);



    return 0;
}