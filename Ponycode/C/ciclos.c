#include<stdio.h>

int main(){ 

    /*
    for (int i = 0; i < 10; i++)    
        printf("%d\n",i);

    */
   /*
   int i=0;
   while (i!=10)
   {
       printf("%d\n",i);
       i++;
   }
   */
   
    int suma=0;

    for (int i = 1; i <= 100; i++)
    {
        suma+=i; //acumulador
    }
    
    printf("%d\n",suma);

    int gauss;
    gauss=(100*(100+1))/2;
    printf("%d",gauss);
    return 0;
}