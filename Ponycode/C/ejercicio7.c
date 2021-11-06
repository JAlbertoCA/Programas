#include<stdio.h>

int main(){

    int N; //numero de hachas
    int H; //talentos
    int M; // numero espadas 
    int E; // talentos
    scanf("%d %d %d %d",&N,&H,&M,&E);

    //algoritmos
    int talentos=N*H+M*E;//suma de los talentos

    //imprimimos
    printf("%d",talentos);

    return 0;
}