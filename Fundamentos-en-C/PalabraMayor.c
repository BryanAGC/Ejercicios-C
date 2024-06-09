#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[100], palabra2[100];
    int comparacion;
    
    printf("Ingresa la primera palabra: ");
    scanf("%s", palabra1);
    
    printf("Ingresa la segunda palabra: ");
    scanf("%s", palabra2);
    
    comparacion = strcmp(palabra1, palabra2);
    
    if (comparacion == 0) {
        printf("Ambas son iguales");
    } else if (comparacion < 0) {
        printf("%s es menor que %s", palabra1, palabra2);
    } else {
        printf("%s es mayor que %s", palabra1, palabra2);
    }
    
    return 0;
}