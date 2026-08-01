#include <SoftwareSerial.h>

//Definir constantes para pines interfaz serial
const byte rxPin = 8;
const byte txPin = 9;

SoftwareSerial mySerial(rxPin, txPin);

void setup()
{
    mySerial.begin(9600);

    //X = puerto en letra mayuscula
    //YY = numero en hexadecimal para indicar: 1 input o 0 output todos los 8 pines juntos
    //ZZ = numero en hexadecimal para encender todos los 8 pines juntos
    //MM = numero en hexadecimal para apagar todos los 8 pines juntos

    DDRX = 0xYY;

    unsigned long inicio = millis();

    for (int i = 0; i <= 2000; i++)
    {
        PORTX = 0xZZ;
        PORTX = 0xMM;
    }

    unsigned long fin = millis();
    unsigned long duracion = fin - inicio;

    mySerial.print("Duracion en milisegundos: ");
    mySerial.println(duracion);
}

void loop()
{
    
}