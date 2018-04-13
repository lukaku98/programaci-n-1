#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int vector[5]={-1,2,0,-12,4};
    //swap
    char vector[5]={'f','g','a','m','q'};
    int i;
    int j;
    char auxiliar;

    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
         if(vector[i]>vector[j])
         {
             auxiliar=vector[i];
             vector[i]= vector[j];
             vector[j]=auxiliar;
         }
        }
    }
for(i=0;i<5;i++)
{
    printf("%d\n", vector[i]);
}



    return 0;
}
