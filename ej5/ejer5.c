#include <16f84a.h>

#byte porta = 0x05 

/* RUTINA DE INTERRUPCION */
#INT_EXT
void rb0_int(){
	porta++;
}
/*************************/

void main(){
	// SETUP
	porta = 0;
	set_tris_a(0x00); 		//puerto a de salida
	set_tris_b(0x01); 		//puertos b de entrada
	ext_int_edge(L_TO_H);	//FLANCO ESPERANDO QUE LA LINEA PASE DE LOW A HIGH
	enable_interrupts(INT_EXT);
	enable_interrupts(GLOBAL);
	/******************/
		
	// LOOP
	while(TRUE){
	}

}
