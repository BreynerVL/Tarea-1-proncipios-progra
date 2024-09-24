#include <iostream>

int main()
{
    int num1, num2, num3 = 0;
    printf("Digite el primer valor: ");
    scanf("%d", &num1);

    printf("Digite el segundo valor: ");
    scanf("%d", &num2);

    printf("Digite el tercer valor: ");
    scanf("%d", &num3);

    int mayor, intermedio, menor = 0;

    if (num1 > num2 && num1 >num3)
    {
      mayor = num1;

        if (num2 > num3)
        {
            intermedio = num2;
            menor = num3;
        }

        else
        {
          intermedio = num3;
          menor = num2;
        }


    }

     else if (num2 > num1 && num2 > num3)
        {
            mayor = num2;

            if (num1 > num3)
            {
            intermedio = num1;
            menor = num3;
            }
            else
            {
          intermedio = num3;
          menor = num1;
            }


        }

        else
        {
                mayor = num3;
            if (num2 > num1)
            {
            intermedio = num2;
            menor = num1;
            }

                else
                {
                    intermedio = num1;
                    menor = num2;
                }
        }


    printf("El numero mayor es : %d\n " , mayor);
    printf("El numero intermedio es : %d\n" , intermedio);
    printf("El numero menor es : %d\n" , menor);


}
