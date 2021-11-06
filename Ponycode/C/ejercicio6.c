#include<stdio.h>
//un programa que te de la longitud en metros
//y te debe de imprimir la longitud en yardas, millas ,pies 
int main (){

    //aqui escribe  luis
    int metros;
    scanf("%d",&metros);
    int yarda= metros*1.09361;
    int milla= metros*0.000621371;
    int pie= metros*3.28084;
    printf("%d %d %d", yarda, milla, pie);

    return 0; 
}