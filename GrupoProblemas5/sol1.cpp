/*
 * a. 	Implemente un programa que permita calcular el valor de F(x) 
 * 		para valores de “x” reales.
 * b. 	Utilice la función anterior para poder calcular la raíz de 
 *		F(x). Se requiere de una precisión de un dígito decimal como 
 *		mínimo. Realice la búsqueda de la raíz en el intervalo [-1000,1000]
*/

#include <bits/stdc++.h>
#define MAX_ERROR 0.0001
#define MIN_X -1000
#define MAX_X 1000

using namespace std;

// Desarrollo de la función
double f(double x){
	return 1200 + pow(x,2) - pow(x,3) - log10(x);
}

// Desarrollo de la derivada de la función
double df(double x){
	return 2*x - 3*pow(x,2) - pow(x,-1);
}

// Método de Newton-Raphson para el cálculo de una raíz
double newtonRaphson(double x){
	return x - f(x)/df(x);
}

// Algoritmo para hallar la raíz
double resolver(double x){
	double y; // siguiente aproximacion al valor de la raíz
	double error;
	do{
		y = newtonRaphson(x);
		error = abs(y-x);
		x = y;
	}while(error > MAX_ERROR && y > MIN_X);
	return y;
}

int main(){
	printf("La raiz de la funcion en el intervalo [-1000; 1000] es: %f\n", resolver(MAX_X));
	return 0;
}
