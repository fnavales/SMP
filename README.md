# SMP
Repo para añadir temario, terminología y código de la asignatura Sistemas con Microprocesadores.


# Ejercicios
Los primeros ejercicios los realizamos en el simulador "Proteus 7 Professional", usamos el microprocesador PIC16F84A.

## Diseño
![dis1](https://github.com/fnavales/SMP/blob/master/circuitos/buttonDisplay.png?raw=true)
![dis2](https://github.com/fnavales/SMP/blob/master/circuitos/interrupciones.png?raw=true)

## Códigos

+ Ej1: Este ejercicio permite incrementar el display de 7 segmentos entre 0-F (hexadecimal). Para ello pulsamos el primer botón.

+ Ej2: En este caso al pulsar el botón obtenemos un número de 1-6 simulando el valor de un dado. Obtenemos el valor del timer_0 en cada pulso y obtenemos el valor en módulo 6.

+ Ej3: Podemos incrementar/decrementar el valor del display haciendo uso de ambos botones.

+ Ej4: Usamos la directiva delay, junto al timer_0 para incrementar el contador cada segundo.

+ Ej5: Usamos el segundo diseño, al pulsar el botón provocamos una interrupción externa que incrementa el contador.

en construcción...