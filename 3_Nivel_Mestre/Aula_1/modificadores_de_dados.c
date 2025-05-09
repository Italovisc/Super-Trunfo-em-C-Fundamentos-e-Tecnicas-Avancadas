#include <stdio.h>

int main() {
    int num1 = 3000000000;
    unsigned int numUn = 3000000000;

    int num2 = 2147483647;
    long int numLong = 2147483648;


    printf("Número sem Unsingned : %d\n", num1);
    printf("Número com Unsingned: %u\n", numUn);

    // OBS: VS Code não sabe como tratar esse tipo de modificador, ou seja, é inutilizável por si só
    printf("\nNúmero sem Long: %d\n", num2);
    printf("Número com Long: %ld\n", numLong);


    short int numShort = 32767;
    printf("\nNúmero pequeno : %d\n", numShort);

    numShort = 32768;
    printf("Número pequeno atualizado: %d\n", numShort);


    return 0;
}