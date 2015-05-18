#include <bits/stdc++.h>

#define MAX 100

using namespace std;

struct datosAlumno{
	char codigo[10];
	char nombre[20];
	char paterno[20];
	char materno[20];
	int nota;
};

void imprimeSeparador(){
	printf("+=========+====================+====================+====================+====+\n");
}

void imprimeCabecera(){
	printf("|%-9s|%-20s|%-20s|%-20s|%-4s|\n", "CODIGO", "NOMBRE", "A. PATERNO", "A. MATERNO", "NOTA");
}

void imprimeAlumno(datosAlumno x){
	printf("|%9s|%-20s|%-20s|%-20s|%4d|\n", x.codigo, x.nombre, x.paterno, x.materno, x.nota);
}

int main(){
	// Ingreso de datos de los alumnos
	int n;
	datosAlumno alumnos[MAX];
	printf("Ingrese cantidad de alumnos: ");
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%s %s %s %s %d", &alumnos[i].codigo, &alumnos[i].nombre, &alumnos[i].paterno, &alumnos[i].materno, &alumnos[i].nota);
	// Mostrar listado de todos los alumnos registrados
	printf("%s\n", "LISTADO DE ALUMNOS REGISTRADOS");
	imprimeSeparador();
	imprimeCabecera();
	imprimeSeparador();
	for (int i = 0; i < n; ++i)
		imprimeAlumno(alumnos[i]);
	imprimeSeparador();
	// Mostrar alumno con la mayor nota
	int maxNota = 0;
	for (int i = 0; i < n; ++i)
		if(alumnos[i].nota > maxNota)
			maxNota = alumnos[i].nota;
	printf("%s\n", "ALUMNO(S) CON MAYOR NOTA");
	imprimeSeparador();
	imprimeCabecera();
	imprimeSeparador();
	for (int i = 0; i < n; ++i)
		if(alumnos[i].nota == maxNota)
			imprimeAlumno(alumnos[i]);
	imprimeSeparador();
	return 0;
}