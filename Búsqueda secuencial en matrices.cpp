#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3
void mostrar_matriz(int matriz[][COLUMNAS], int filas, int columnas) {
	printf("Contenido de la matriz:\n");
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			printf("%4d", matriz[i][j]);
		}
		printf("\n");
	}
}

void busqueda_en_matriz(int matriz[][COLUMNAS], int filas, int columnas, int valor, int rangoMin, int rangoMax) {
	int encontrado = 0;
	int contador = 0;
	
	if (filas == 0 || columnas == 0) {
		printf("La matriz está vacía. No se puede realizar la búsqueda.\n");
		return;
	}
	
	if (valor < rangoMin || valor > rangoMax) {
		printf("El valor %d está fuera del rango permitido [%d - %d].\n", valor, rangoMin, rangoMax);
		return;
	}
	
	printf("Buscando el valor %d en la matriz...\n", valor);
	
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			contador++;
			if (matriz[i][j] == valor) {
				printf("Valor encontrado en la posición [%d][%d]\n", i, j);
				encontrado = 1;
			}
		}
	}
	
	if (!encontrado) {
		printf("El valor %d no se encuentra en la matriz.\n", valor);
	}
	
	printf("Total de comparaciones realizadas: %d\n", contador);
}

int main() {
	int matriz[FILAS][COLUMNAS] = {
		{1, -2, 3},
	{-4, 5, -6},
		{7, -8, 9}
	};
	
	int valor, rangoMin, rangoMax;
	
	// Mostrar matriz antes de buscar
	mostrar_matriz(matriz, filas, columnas);
	
	// Entrada de datos del usuario
	printf("Ingrese el número que desea buscar: ");
	scanf("%d", &valor);
	
	printf("Ingrese el rango mínimo permitido: ");
	scanf("%d", &rangoMin);
	
	printf("Ingrese el rango máximo permitido: ");
	scanf("%d", &rangoMax);
	
	// Llamada a la búsqueda
	busqueda_en_matriz(matriz, filas, columnas, valor, rangoMin, rangoMax);
	
	return 0;
}

