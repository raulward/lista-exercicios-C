#include <stdio.h>
#include <math.h>

// Função para converter graus para radianos
double graus_para_radianos(double graus) {
    return graus * 3.141592653589793 / 180.0;
}

int main() {
    double result, gravity = 9.81f, velocity, height, graus, graudRad;

    printf("Digite a velocidade inicial, a altura inicial e o angulo: ");
    scanf("%lf %lf %lf", &velocity, &height, &graus);

    graudRad = graus_para_radianos(graus);

    // Calculando o alcance do projétil com altura inicial
    result = (velocity * cos(graudRad) / gravity) * 
             (velocity * sin(graudRad) + sqrt((velocity * sin(graudRad)) * (velocity * sin(graudRad)) + 2 * gravity * height));

    printf("O alcance do projétil é: %.2f metros\n", result);

    return 0;
}
