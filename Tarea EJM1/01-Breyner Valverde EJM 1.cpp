#include <iostream>

int main()
{
    float numero1, numero2 =0;

    printf("Digite el primer numero: ");
        //int numero1 = 0;
        scanf("%f", &numero1);

    printf("Digite el segundo menor al primer numero: ");
        //int numero2 = 0;
        scanf("%f", &numero2);


    if (numero1 > numero2)
    {


        printf("La suma de los numeros %.2f + %.2f = %.2f\n", numero1, numero2, numero1 + numero2);
        printf("La resta de los numeros %.2f - %.2f = %.2f\n", numero1, numero2, numero1 - numero2);
        printf("La multiplicacion de los numeros %.2f * %.2f = %.2f\n", numero1, numero2, numero1 * numero2);
        printf("La divicion de los numeros %.2f / %.2f = %.2f\n", numero1, numero2, numero1 / numero2);
    }

    return 0;
}
