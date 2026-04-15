void tabela_verdade_e() {
    Serial.println("AND: Verdade e Verdade = Verdade, caso contrario False");

    Serial.printf("V ^ V = %d\n", true && true);
    Serial.printf("V ^ F = %d\n", true && false);
    Serial.printf("F ^ V = %d\n", false && true);
    Serial.printf("F ^ F = %d\n", false && false);
}

void tabela_verdade_or() {
    Serial.println("OR: Falso ou Falso = Falso, caso contrario Verdade");

    Serial.printf("V v V = %d\n", true || true);
    Serial.printf("V v F = %d\n", true || false);
    Serial.printf("F v V = %d\n", false || true);
    Serial.printf("F v F = %d\n", false || false);
}

void tabela_verdade_negacao() {
    Serial.println("NOT: Inverso de todas as afirmacoes");

    Serial.printf("V | ~V = %d\n", !true);
    Serial.printf("F | ~F = %d\n", !false);
}
