#include <stdlib.h>
#include <stdio.h>

/**
* Mostrar tabla del n valor refactorizando codigo
*/
int main(){


	int NUMERO_MAXIMO = 10;
	int tabla = 1;
	int numeroActual = 1; // Bandera


	while(numeroActual <= NUMERO_MAXIMO){

		printf("%i x %i = %i\n",tabla,numeroActual, tabla * numeroActual);
		numeroActual++;
	}


return 0;

}
