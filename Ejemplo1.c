#include <stdlib.h>
#include <stdio.h>

/**
* SINTAXIS while y contar del 0 al 100
*/
int main(){

/*
 while(CONDICION){
 	// cualquier código
 }
*/
	int bandera = 0;
	int MAX_REPETICIONES = 100;
	while(bandera <= MAX_REPETICIONES){
		printf("Numero %i \n",bandera);
		bandera = bandera+1;
	}

return 0;

}
