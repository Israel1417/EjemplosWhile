#include <stdlib.h>
#include <stdio.h>

/**
* Mostrar tabla de acuerdo a lo que solicite el usuario y preguntarle si quiere ver otra.
*/
int main(){
	
	
	int NUMERO_MAXIMO = 10;
	int tabla = 0;
	int numeroActual = 1; // Bandera
	int bandera=0;

	while(bandera==0){
		printf("Ingresa el número de la tabla de multiplicar que deseas visualizar\n ");
		scanf("%d", &tabla);
		numeroActual = 1;
		
			while(numeroActual <= NUMERO_MAXIMO){

				printf("%i x %i = %i\n",tabla,numeroActual, tabla * numeroActual);
				numeroActual++;
			}
	
		printf("Si Deseas obtener otra tabla de multiplicar ingresa [0], de lo contrario ingresa[1]\n");
		scanf("%d", &bandera);
		
		
	}
	


return 0;

}
