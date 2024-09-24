#include <iostream>

 int main()
{

    float base = 0.0, altura = 0.0;
    float area = 0.0;

    printf("Digite la base del triangulo: ");
    scanf("%f", &base);

    printf("Digite la altura del triangulo: ");
    scanf("%f", &altura);

    // Calcular el área del triangulo
    area = (base * altura) / 2;

    // Imprimir el área usando printf
    printf("El area del triangulo es: %.2f\n", area);

    return 0;
}
