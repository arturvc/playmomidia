/*
  PlaymoMídia - toyart reprogramável
  desenvolvido por Artur Cordeiro - http://arturvc.net.br
  Fortaleza, 2021.
  |||||||||||||||||||||||||||||||||||||||||||||||||||
  Exercicio 07 - Teste condicional
  |||||||||||||||||||||||||||||||||||||||||||||||||||
  Este código usa bibliotecas do display Oled escritas pela Adafruit Industries.
    "Adafruit invests time and resources providing this open source code,
    please support Adafruit and open-source hardware by purchasing
    products from Adafruit!" ------> http://www.adafruit.com
*/

#include <Adafruit_GFX.h> // Inclui a biblioteca GFX.
#include <Adafruit_SSD1306.h> // Inclui a bibliteoca SSD1306.
Adafruit_SSD1306 display(-1); // Cria o objeto "display".

int x = 0; // Cria uma variável do tipo número inteiro (integer) com o valor 0.
int y = 0; // Cria uma variável do tipo número inteiro (integer) com o valor 0.

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // Inicia o objeto "display".
  display.setTextColor(WHITE); // Define a cor do texto como branca.
}

void loop() {
  // O código fica em loop, começando aqui.

  display.clearDisplay(); // Limpa o display.

  display.setTextSize(2); // Define o tamanho do texto.
  display.setCursor(x, y); // Posiciona o cursor do texto.
  display.print("if & else"); // Imprime o valor da variável.
  display.display(); // Atualiza o display.
  delay(10); // Pausa.

  /*
    Teste condicional com o par "if" e "else".
    Como o display tem 64 pixels de altura,
    se o y for maior que 64, o y é definido como 0,
    caso contrário, o valor de y é incrementado.
  */
  if (y > 64) {
    y = 0; // Define o valor de y como 0.
  }
  else {
    y = y + 4; // Incrementa o valor de y.
  }

  // Final do código, volta para cima e repete o loop.
}
