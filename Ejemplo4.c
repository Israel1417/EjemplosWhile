#include <stdlib.h>
#include <stdio.h>

/**
* Mostrar tabla de acuerdo a lo que solicite el usuario
*/
int main(){
	
	
	int NUMERO_MAXIMO = 10;
	int tabla = 1;
	int numeroActual = 1; // Bandera

	printf("Ingresa el número de la tabla de multiplicar que deseas visualizar\n ");
	scanf("%d", &tabla);

	while(numeroActual <= NUMERO_MAXIMO){

		printf("%i x %i = %i\n",tabla,numeroActual, tabla * numeroActual);
		numeroActual++;
	}


return 0;

}
