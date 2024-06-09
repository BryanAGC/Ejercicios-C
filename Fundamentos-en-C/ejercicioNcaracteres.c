#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,longitud;
    char palabra[100];
    
printf("Introduce una palabra \n");
gets(palabra);
longitud=strlen(palabra);
for ( i = 0; i < longitud; i++){
    for ( j = 0; j<longitud; j++){
        printf("*");
    }
    printf("\n")   ;
}
      return 0;
}