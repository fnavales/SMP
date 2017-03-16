#include <16f84a.h>

/* Declarar IO caso 2 */
//use fast_io(a) te obliga a declarar si el puerto es de entrada/salida (caso 1)
//						eliminando la comprobacion de las funciones input/output.
// Por defecto las funciones input/output antes de leer/escribir comprueban
// que el puerto sea de entrada/salida configurandolo en su defecto.
/********************/

/* Directivas */
// Cuando nos quedamos sin memoria RAM funciona mejor
// #byte permite darle un nombre a una posicion de memoria, necesitamos declarar
//			la dirección del puerto (uso de tris)
/*************/

#byte portb = 0x06 // SM-03 cheatsheet pdf 17 
#bit RA0 = 0x05.0 // Direccion de memoria 5, banco 0

void main(){
	// SETUP
	portb = 0; // La direccion de memoria no se declara como tipo
	/* Declarar IO caso 1 */
	set_tris_a(0x01); //puerto a de entrada
	set_tris_b(0x00); //puertos b de salida
	/******************/
	//output_b(cont);	//mostramos el primer valor del contador
	
	// LOOP
	while(TRUE){
		while(!RA0){}  //Mientras no haya entrada, espero
		portb++;
		//output_b(cont);
		while(RA0){}	//Mientras este pulsado, espero
	}

}
