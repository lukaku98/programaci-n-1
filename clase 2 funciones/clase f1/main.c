#include <stdio.h>
#include <stdlib.h>
/*declaracion de la funcion - prototipo de la funcion

tipo_de_dato_devuelto: int;void;float;char;double;long

identificador

nombre representativo: verbo+objeto

parametros de entrada

declaro una variable por cada parametro*/
/***********************************/
int mostraeEincrementar(int numero);
int main()
{
 int numero;
 int incremento;

 printf("ingrese un numero: ");
 scanf("%d", &numero);                                      /*este es el prototipo 3 que vamos a programar siempre
                                                             que retorna y recibe*/


 /*llamada a la funcion*/
 incremento=mostrarEincrementar(numero);/*parametro actual*/
 printf("\n el numero incremetado es: %d", incremento);
    return 0;
}
/*implementacion o desarollo de la funcion*/
int mostrarEincrementar(int numero)/*parametro formal*/
{
    int retorno;
    printf("el numero ingresado es: %d", numero);
    retorno=numero + 10;
    return retorno;
}
