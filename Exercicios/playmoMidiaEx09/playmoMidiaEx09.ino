/*
  PlaymoMídia - toyart reprogramável
  desenvolvido por Artur Cordeiro - http://arturvc.net.br
  Fortaleza, 2021.
  |||||||||||||||||||||||||||||||||||||||||||||||||||
  Exercicio 09 - Variável String
  |||||||||||||||||||||||||||||||||||||||||||||||||||
  Este código usa bibliotecas do display Oled escritas pela Adafruit Industries.
    "Adafruit invests time and resources providing this open source code,
    please support Adafruit and open-source hardware by purchasing
    products from Adafruit!" ------> http://www.adafruit.com
*/

#include <Adafruit_GFX.h> // Inclui a biblioteca GFX.
#include <Adafruit_SSD1306.h> // Inclui a bibliteoca SSD1306.
Adafruit_SSD1306 display(-1); // Cria o objeto "display".

String t1 = "passado"; // Cria a variável de texto e define o valor.
String t2 = "presente"; // Cria a variável de texto e define o valor.
String t3 = "futuro"; // Cria a variável de texto e define o valor.

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // Inicia o objeto "display".
  display.setTextColor(WHITE); // Define a cor do texto como branca.
}

void loop() {
  // O código fica em loop, começando aqui.

  display.setTextSize(2); // Define o tamanho do texto.

  display.clearDisplay(); // Limpa o display.
  display.setCursor(10, 0); // Posiciona o cursor do texto.
  display.print(t1); // Imprime no display.
  display.display(); // Atualiza o display.
  delay(1000); // Pausa.

  display.clearDisplay(); // Limpa o display.
  display.display(); // Atualiza o display.
  delay(100); // Pausa.

  display.clearDisplay(); // Limpa o display.
  display.setCursor(10, 0); // Posiciona o cursor do texto.
  display.print(t2); // Imprime no display.
  display.display(); // Atualiza o display.
  delay(1000); // Pausa.

  display.clearDisplay(); // Limpa o display.
  display.display(); // Atualiza o display.
  delay(100); // Pausa.

  display.clearDisplay(); // Limpa o display.
  display.setCursor(10, 0); // Posiciona o cursor do texto.
  display.print(t3); // Imprime no display.
  display.display(); // Atualiza o display.
  delay(1000); // Pausa.

  display.clearDisplay(); // Limpa o display.
  display.display(); // Atualiza o display.
  delay(100); // Pausa.

  // Final do código, volta para cima e repete o loop.
}
