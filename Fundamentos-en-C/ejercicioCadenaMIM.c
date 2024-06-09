#include<stdio.h>
#include<stdlib.h>
int main(){
    int res;
    int pl1,pl2;
    char str1[20];
    char str2[20];

    printf("Ingrese la primer palabra ");
    scanf("%d",&pl1);
    printf("Ingrese la segunda palabra palabra ");
    scanf("%d",&pl2);

    res=strcmp(str1[pl1],str2[pl2]);
    printf("resultado: %d ",res );

      return 0;
}