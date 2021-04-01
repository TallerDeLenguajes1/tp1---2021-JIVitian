#include <stdio.h>

int cuadrado(int numero);//funcion que devuelve el cuadrado de un numero
void cuadrado(int *numero);//Funcion que muestra el cuadrado de un numero
void mostrar(int *variable);//Funcion que muestra el valor y la dirección de una variable
void invertir(int& a, int& b); //deberá devolver en el valor de a en la variable b, y en el valor de b el valor de a
void orden(int& a, int& b); //deberá devolver en el valor de a el valor más chico, y en el valor de b el valor más grande

int main() {
	int a, b;
	
	printf("Ingrese un par de valores: ");
	scanf("%d", &a);
	scanf("%d", &b);
	
	printf("El cuadrado del primer numero es: %d\n", cuadrado(a));
	
	cuadrado(&a);
	
	mostrar(&a);
	
	invertir(a, b);

	orden(a,b);
	
	return 0;
}


int cuadrado(int numero) {
	return numero*numero;
}

void cuadrado(int *numero) {
	printf("Cuadrado: %d\n", cuadrado(*numero));
}

void mostrar(int *variable) {
	printf("Direccion de la variable: %d\nValor de la Variable: %d\n", &variable, *variable);
}

void invertir(int& a, int& b) {
	int auxiliar;
	
	auxiliar = a;
	a = b;
	b = auxiliar;
	
	printf("a=%d\nb=%d\n", a, b);
}

void orden(int& a, int& b) {
	int aux = a;
	
	if (a > b) {
		a = b;
		b = aux;
	}
	
	printf("El menor a=%d\nEl mayor b=%d\n", a, b);
}
