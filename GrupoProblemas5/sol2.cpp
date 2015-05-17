#include <bits/stdc++.h>

using namespace std;

struct datos
{
	char codigo[10];
	char nombre[20];
	char paterno[20];
	char materno[20];
	int nota;
};

void imprimeSeparador(){
	printf("+---------+--------------------+--------------------+--------------------+----+\n");
}

void imprimeCabecera(){
	printf("|%-9s|%-20s|%-20s|%-20s|%-4s|\n", "CODIGO", "NOMBRE", "A. PATERNO", "A. MATERNO", "NOTA");
}

void imprimeAlumno(datos x){
	printf("|%9s|%-20s|%-20s|%-20s|%4d|\n", x.codigo, x.nombre, x.paterno, x.materno, x.nota);
}

int main(){
	datos aux;
	scanf("%s %s %s %s %d", &aux.codigo, &aux.nombre, &aux.paterno, &aux.materno, &aux.nota);
	imprimeSeparador();
	imprimeCabecera();
	imprimeSeparador();
	imprimeAlumno(aux);
	imprimeAlumno(aux);
	imprimeSeparador();
	return 0;
}