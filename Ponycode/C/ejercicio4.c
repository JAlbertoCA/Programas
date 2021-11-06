#include<stdio.h>

int main(){
    int x=5;
    float y=5.478;
    int operacionentera;
    float operacionflotante;
    operacionentera=x/y; // 5/5.478=0
    operacionflotante=x/y; // 5/5.478
    printf("Suma entera = %d\n",operacionentera); //
    printf("Suma flotante= %.3f",operacionflotante); //
    return 0;
}