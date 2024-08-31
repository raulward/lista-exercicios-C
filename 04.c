#include <stdio.h>

int main() {

    int number;

    printf("Insert a number: ");

    scanf("%d", &number);

    printf("%s\n", number % 2 ? "impar" : "par");


    return 0;
}