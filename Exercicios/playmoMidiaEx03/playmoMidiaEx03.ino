/*
  PlaymoMídia - toyart reprogramável
  desenvolvido por Artur Cordeiro - http://arturvc.net.br
  Fortaleza, 2021.
  |||||||||||||||||||||||||||||||||||||||||||||||||||
  Exercicio 03 - Acentuação de letras
  |||||||||||||||||||||||||||||||||||||||||||||||||||
  Este código usa bibliotecas do display Oled escritas pela Adafruit Industries.
    "Adafruit invests time and resources providing this open source code,
    please support Adafruit and open-source hardware by purchasing
    products from Adafruit!" ------> http://www.adafruit.com
*/

#include <Adafruit_GFX.h> // Inclui a biblioteca GFX.
#include <Adafruit_SSD1306.h> // Inclui a bibliteoca SSD1306.
Adafruit_SSD1306 display(-1); // Cria o objeto "display".

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // Inicia o objeto "display".
  display.setTextColor(WHITE); // Define a cor do texto como branca.
  display.setTextSize(2); // Define o tamanho do texto.
}

void loop() {
  // O código fica em loop, começando aqui.
  display.clearDisplay(); // Limpa o display.
  
  display.setCursor(0, 30); // Posiciona o cursor do texto.
  display.print("Mar e vida"); // Imprime o texto que está entre aspas.

  display.setCursor(50, 19); // Posiciona o cursor do texto.
  display.print(","); // Imprime o texto que está entre aspas.

  display.display(); // Atualiza o display.

  // Final do código, volta para cima e repete o loop.
}
