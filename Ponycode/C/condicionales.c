#include<stdio.h>

int main(){
    /*
    int x=4;

    if (x==5)    
        printf("El valor de x es 5");
    
    else if(x==3)
        printf("El valor de x es 3");    
    
    else    
        printf("El valor de x es distinto de 5 o 3");*/

            
    int x=-7;
    
    if (x%2==0)
        printf("El valor de x es par");  

    else if (x<0 && x%2!=0)             
        printf("El valor de x es negativo y es impar");

    else 
        printf("El valor de x es impar");


    return 0;
}


