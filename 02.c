#include <stdio.h>

int main() {

    float result; 
    int number1, number2, number3;

    printf("Insert the values bellow: \n");
    scanf("%d %d %d", &number1, &number2, &number3);

    result = (float) (number1 + number2 + number3) / 3;

    printf("%.2f\n", result);

}