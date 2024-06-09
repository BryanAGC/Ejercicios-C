# include <stdio.h>
# include <string.h>
int main(){

     char pal[40],pal2[40];
     int n,x,a=0,p=0,e=0,u;
     char b=' ';
     printf("Introduzca una palabra:");
     gets(pal);
     n=strlen(pal);
     for (u=0;u<=n;u++){
      if (pal[u]==b){
     u++;
      }
      pal2[e]=pal[u];
      e++;}
    x=0;
    n=strlen(pal2);
    for (x=n-1;x>=0;x--){
     if (pal2[x]==pal2[a]){
         p++;}
     a++;}
    if (p==n)
      printf("\n\nLa palabra es palindrome  \n\n");
    else{
      printf ("\n\nLa palabra no es palindrome \n\n");}
    return 0;
}