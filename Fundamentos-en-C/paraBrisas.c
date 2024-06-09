#include<stdio.h>
#include<stdlib.h>
int main(){
int i,tamaño;

int len;
char origen[]="brisas";
char destino[10]="para";


printf(" %s", destino );
tamaño = strlen(destino);
for (i = 1; i<=tamaño; i++){
   printf("%s", origen); 
}
return 0;
}