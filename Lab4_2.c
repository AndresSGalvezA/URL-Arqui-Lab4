const int LED_PIN = 8;

void setup()
{
    // Configura el pin 8 como una salida digital
    pinMode(LED_PIN, OUTPUT);
    
    // Garantiza que el LED comience apagado
    digitalWrite(LED_PIN, LOW);
}

void loop()
{
    // Encender el LED
    digitalWrite(LED_PIN, HIGH);
    
    // Esperar 1000 milisegundos
    delay(1000);
    
    // Apagar el LED
    digitalWrite(LED_PIN, LOW);
    
    // Esperar 1000 milisegundos
    delay(1000);
}