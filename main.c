#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    float numero2;
    float suma;
    char letra;

    printf("ingrese un numero entero: ");
    scanf("%d", &numero1);

    printf("ingrese un numero flotante:");
    scanf("%f", &numero2);

    printf("la letra es:");

    letra=getch();



    suma=numero1 + numero2;

    printf("el numero entero es: %d", numero1);
    printf("\n el numero flotante es:%.2f " ,numero2);
    printf("\n la suma es: %.2f", suma);
    printf("\n la letra es:%c", letra);
    return 0;
}
