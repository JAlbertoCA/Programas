#include<stdio.h>

int main() {

    int C; //Temperatura grados celcius
    scanf("%d",&C);

    int K=C+273; //temperatura en kelvin
    int F=(C*1.8)+32; //temperatura en farenheit
    int R=C/1.25; //temepratura en reamur

    printf("%d %d %d",K,F,R);

    return 0; 
}

