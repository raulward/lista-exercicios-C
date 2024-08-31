#include <stdio.h>

int main() {

    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);

    printf("%s\n", ((x < z + y) && (y < x + z) && (z < x + y)) ? "pode formar" : "nao pode formar");

}