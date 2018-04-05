#include <stdio.h>
#include <stdlib.h>
/*declaracion de la funcion - prototipo de la funcion

tipo_de_dato_devuelto: int;void;float;char;double;long*/                  /*prototipo2*/

/*identificador

nombre representativo: verbo+objeto

parametros de entrada

declaro una variable por cada parametro*/
/***********************************/
void mostrarmensaje(int numero);
int main()
{
 int numero;

 printf("ingrese un numero: ");
 scanf("%d", &numero);                                      /*


 /*llamada a la funcion*/
 mostrarmensaje(numero);/*parametro actual*/
    return 0;
}
/*implementacion o desarollo de la funcion*/
void mostrarmensaje(int numero)/*parametro formal*/
{
    printf("el numero ingresado es: %d", numero);
}
