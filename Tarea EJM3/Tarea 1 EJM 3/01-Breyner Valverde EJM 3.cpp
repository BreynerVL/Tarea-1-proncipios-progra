#include <iostream>

 int main()
{

    float lado1 = 0.0, lado2 = 0.0;
    float area = 0.0;

    printf("Digite un lado del rectangulo: ");
    scanf("%f", &lado1);

    printf("Digite otro lado del rectangulo: ");
    scanf("%f", &lado2);

    // Calcular el área del rectángulo
    area = lado1 * lado2;

    // Imprimir el área usando printf
    printf("El area del rectangulo es: %.2f\n", area);

    return 0;
}
