#include <stdio.h>

int main() {
    int a = 10;
    int b= 20;


    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);


    int x = 5;
    float y = 5.0;
    char c = 'a';


    printf("\nx >= y: %d\n", x >= y);
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    printf("\nx >= c: %d\n", x >= c);
    printf("O valor ASCII de %c é: %d\n",c , c);


    float num1 = 10.2;
    int num2 = 10;


    printf("\nnum1 > num2: %d\n", (int)num1 > num2);
    printf("num1 == num2: %d\n", (int)num1 == num2);


    return 0;
}