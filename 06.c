#include <stdio.h>
#include <limits.h>

int main() {

    int min = INT_MIN, max = INT_MAX, medium = 0, n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3) {
        max = n1;
        if (n2 >= n3) {
            min = n3;
            medium = n2;
        } else {
            min = n2;
            medium = n3;
        }
    } else if (n2 > n1 && n2 > n3) {
        max = n2;
        if (n1 >= n3) {
            min = n3;
            medium = n1;
        } else {
            min = n1;
            medium = n3;
        }
    } else {
        max = n3;
        if (n2 >= n1) {
            min = n1;
            medium = n2;
        } else {
            min = n2;
            medium = n1;
        }
    }

    printf("Menor: %d, Meio: %d, Maior: %d\n", min, medium, max);

}