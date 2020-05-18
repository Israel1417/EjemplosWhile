#include <stdlib.h>
#include <stdio.h>

/**
* Mostrar tabla del 4
*/
int main(){


	int NUMERO_MAXIMO = 10;
	int tabla = 4;
	int numeroActual = 1; // Bandera
	int resultadoActual = 0;
	
	while(numeroActual <= NUMERO_MAXIMO){
		resultadoActual = tabla * numeroActual;
		printf("4 x %i = %i\n",numeroActual,resultadoActual);
		numeroActual= numeroActual+1;
	}


return 0;

}
