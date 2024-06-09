#include<stdio.h>
#include<stdlib.h>
int main(){

int len;
char palabraU[100];
char temp[100];
char palabraD[100];


printf("ingerese una primer palabra\n");
scanf("%s",palabraU);

printf("palabra_1 : %s \n",palabraU);
printf("ingerese una segunda palabra\n");
scanf("%s",palabraD);
printf("palabra_2 : %s \n",palabraD);

strcpy(temp,palabraU);
strcpy(palabraU,palabraD);
strcpy(palabraD,temp);
printf("palabra_1 : %s \n",palabraU);
printf("palabra2 : %s \n",palabraD);


return 0;
}