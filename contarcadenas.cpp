#include <stdio.h>
#include <string.h>
int main(){
	char nombre[100];
	char continuar;
	do{
	char *ptr=nombre;
	int longitud=0,vocales=0;
	//Nombre del usuario
	printf("Hola!!Ingresa tu nombre completo porfavor:");
	fgets(nombre, sizeof(nombre), stdin);//Lee la cadena completa eviando desbordamientos
        // Validar entrada vacía
        if (strlen(nombre) == 0) {
            printf("No ingresaste ningún nombre. Inténtalo de nuevo.\n");
            continue;
        }
		
	//Calcular longitud de la cadena
	ptr = nombre;
	while (*ptr != '\0') {
		if (*ptr == '\n') break; // Ignora el salto de línea
	
		if (*ptr != ' ') {
			longitud++;  // Solo cuenta letras no espacios
		}
		
		// Contar vocales (Mayusculas y minusculas)
		char c = *ptr;
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
			c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
			vocales++;
		}
		
		ptr++;//El puntero incrementa
	}
	
	// Reemplazar vocales por asteriscos (*)
	ptr = nombre;
	while (*ptr != '\0') {
		char c = *ptr;
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
			c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
			*ptr = '*';
		}
		ptr++;
	}
	
	// Mostrar los resultados obtenidos
	printf("\n La longitud de la cadena es: %d\n", longitud);
	printf("Tu nombre tiene una cantidad de vocales de: %d\n", vocales);
	printf("Cadena con vocales reemplazadas: %s\n", nombre);

	

	return 0;
}
