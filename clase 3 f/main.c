#include <stdio.h>
#include <stdlib.h>

int pedirEntero(char mensaje [] ,int ,int);
int main()
{
 int edad;
 int legajo;
 int nota;

 legajo=pedirEntero("ingrese legajo: ",1,1000);

 edad=pedirEntero("ingrese edad: ",18,60);

 nota=pedirEntero("ingrese nota: ",1,10);


 printf("la edad es: %d y el legajo es: %d y la nota es:%d ", edad, legajo,nota);



    return 0;
}
int pedirEntero(char mensaje[],int min, int max)
{
int numero;
printf("ingrese %s",mensaje);
scanf("%d",&numero );
while(numero<min||numero<max);
  {
    printf("error: %s",mensaje);
    scanf("%d", &numero);
}


return numero;
}
