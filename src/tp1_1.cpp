#include <stdio.h>

int main() {
    int x = 4;
    int *px = &x;
    
    printf("Contenido del puntero: %d\n", *px);
    printf("Direccion de memoria almacenada por el puntero: %d\n", px);
    printf("Direccion de memoria de la variable: %d\n", &x); 
    printf("Direccion de memoria del puntero: %d\n", &px);
    printf("Tamaño de memoria utilizado por la variable: %d\n", sizeof(&x));
    
    return 0;
}
