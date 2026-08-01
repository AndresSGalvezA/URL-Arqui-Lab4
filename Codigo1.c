void setup()
{
    Serial.begin(9600);

    pinMode(x0, OUTPUT);
    pinMode(x1, OUTPUT);
    pinMode(x2, OUTPUT);
    pinMode(x3, OUTPUT);
    pinMode(x4, OUTPUT);
    pinMode(x5, OUTPUT);
    pinMode(x6, OUTPUT);
    pinMode(x7, OUTPUT);

    //millis() devuelve el número de milisegundos que han pasado desde que la placa encendio o reinicio
    unsigned long inicio = millis();

    for (int i = 1; i <= 2000; i++)
    {
        digitalWrite(x0, 1);
        digitalWrite(x1, 1);
        digitalWrite(x2, 1);
        digitalWrite(x3, 1);
        digitalWrite(x4, 1);
        digitalWrite(x5, 1);
        digitalWrite(x6, 1);
        digitalWrite(x7, 1);
        digitalWrite(x0, 0);
        digitalWrite(x1, 0);
        digitalWrite(x2, 0);
        digitalWrite(x3, 0);
        digitalWrite(x4, 0);
        digitalWrite(x5, 0);
        digitalWrite(x6, 0);
        digitalWrite(x7, 0);
    }

    unsigned long fin = millis();
    unsigned long duracion = fin - inicio;

    Serial.print("Duracion en milisegundos: ");
    Serial.println(duracion);
}

void loop()
{
    
}