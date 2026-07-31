/*
 * Laboratorio No. 4
 * Tutorial: Parpadeo de un LED con PIC16F877A
 *
 * El LED se conecta al pin RB0.
 * El LED permanece encendido durante un segundo
 * y apagado durante un segundo.
 */

// Frecuencia de funcionamiento del microcontrolador.
// Este valor debe coincidir con la frecuencia configurada en Proteus.
#define _XTAL_FREQ 4000000UL

// Biblioteca principal del compilador XC8.
#include <xc.h>

// ==========================================================
// BITS DE CONFIGURACIÓN
// ==========================================================

// Selección del modo de oscilación.
#pragma config FOSC = XT

// Desactivar el temporizador Watchdog.
#pragma config WDTE = OFF

// Activar el temporizador de encendido.
#pragma config PWRTE = ON

// Activar el reinicio por caída de voltaje.
#pragma config BOREN = ON

// Desactivar la programación de bajo voltaje.
#pragma config LVP = OFF

// Desactivar las protecciones de memoria.
#pragma config CPD = OFF
#pragma config WRT = OFF
#pragma config CP = OFF

void main(void)
{
    /*
     * Inicializa todos los pines del puerto B
     * con un valor lógico bajo.
     */
    PORTB = 0x00;

    /*
     * Configura el pin RB0 como salida.
     *
     * En los registros TRIS:
     * 0 = salida
     * 1 = entrada
     */
    TRISBbits.TRISB0 = 0;

    /*
     * Este ciclo se ejecutará indefinidamente.
     */
    while (1)
    {
        // Enviar un 1 lógico a RB0 para encender el LED.
        PORTBbits.RB0 = 1;

        // Esperar 1000 milisegundos.
        __delay_ms(1000);

        // Enviar un 0 lógico a RB0 para apagar el LED.
        PORTBbits.RB0 = 0;

        // Esperar 1000 milisegundos.
        __delay_ms(1000);
    }
}