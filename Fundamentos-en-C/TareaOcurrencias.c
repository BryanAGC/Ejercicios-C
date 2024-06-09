#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
    char palbra[' '];
    int contador =0;
    int i,j;
    printf("ingrese una palabra");
    fflush(stdin);
    gets(palbra);
    for(i=97;i<=122;i++){
        for(j=0;j<strlen(palbra);j++){
        if(palbra[j]==i){
            contador ++;} }
    if(contador==0){
        continue;}
    else{
        printf("La letra %c se repite: %d veces \n",i,contador);
        contador =0;}}
        return 0;}

