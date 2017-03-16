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
//			la direcci�n del puerto (uso de tris)
/*************/

#byte portb = 0x06 // SM-03 cheatsheet pdf 17 
#bit RA0 = 0x05.0 // Direccion de memoria 5, banco 0
#bit RA1 = 0x05.1

#use delay(clock=4000000) // Es necesario a�adir la frecuencia de reloj a la 
								  // que trabaja el procesador para que a�ada las instrucciones
								  // no-trabajo necesarias para pausar la ejecucion

void main(){
	// SETUP
	portb = 0; // La direccion de memoria no se declara como tipo
	/* Declarar IO caso 1 */
	set_tris_a(0x03); //puerto a de entrada
	set_tris_b(0x00); //puertos b de salida
	/******************/
	setup_timer_0(RTCC_INTERNAL);
	
	// LOOP
	while(TRUE){
		delay_ms(1000);
		portb++;
	}

}
