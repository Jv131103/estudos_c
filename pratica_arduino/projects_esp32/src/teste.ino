// setup
void executar_acao_de_configurar_led(){
    Serial.begin(115200);
    pinMode(23, OUTPUT);
}


// Loop
void executar_acao_de_acoes_de_led(){
    digitalWrite(23, HIGH);
    delay(1000);
    digitalWrite(23, LOW);
    delay(1000);
}
