#include <stdio.h>
#include <stdlib.h>
float calcularpromedio(int,int);
int main()
{
   int legajo[3];
   char nombre[3][30];
   int nota1 [3];
   int nota2 [3];
   float promedio[3];
   int i;
   int suma;

   for(i=0;i<3;i++)
   {
       printf("ingrese legajo: " );
       scanf("%d",&legajo[i]);
        printf("ingrese nota1: ");
       scanf("%d",&nota1[i]);
        printf("ingrese nota2: " );
       scanf("%d",&nota2[i]);

        printf("ingrese nombre: ");
        fflush(stdin);
       gets(nombre[i]);



promedio[i]=calcularpromedio(nota1[i],nota2[i]);

   }
   for(i=0;i<3;i++)
    {
        printf("%d %d %d %s %f",legajo[i],nota1[i],nota2[i],nombre[i],promedio[i]);
    }



    return 0;
}
float calcularpromedio(int nota1,int nota2)
{
    float promedio;
    promedio=(float)(nota1+nota2)/2;
    return promedio;
}
