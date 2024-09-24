#include <iostream>


int main()
{
    int dia;

    printf("Digite un numero entre 1 y 12:  ");
    scanf("%d",&dia);

    switch(dia)
    {
      case 1:  printf("enero tiene 31 dias");
               break;
      case 2:  printf("febrero tiene 29 dias");
               break;
      case 3:  printf("Marzo tiene 31 dias");
               break;
      case 4:  printf("abril tiene 30 dias");
               break;
      case 5:  printf("Mayo tiene 31 dias");
               break;
      case 6:  printf("junio tiene 30 dias");
               break;
      case 7:  printf("julio tiene 31 dias");
               break;
    case 8:  printf("agosto tiene 31 dias");
               break;
    case 9:  printf("septiembre tiene 30 dias");
               break;
    case 10:  printf("octubre tiene 31 dias");
               break;
    case 11:  printf("noviembre tiene 30 dias");
               break;
    case 12:  printf("diembre tiene 31 dias");
               break;

      default: printf("Numero incorrecto");

    }

    return 0;
}
