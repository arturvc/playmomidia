/*
  PlaymoMídia - toyart reprogramável
  desenvolvido por Artur Cordeiro - http://arturvc.net.br
  Fortaleza, 2021.
  |||||||||||||||||||||||||||||||||||||||||||||||||||
  Exercicio 05 - Variável numérica
  |||||||||||||||||||||||||||||||||||||||||||||||||||
  Este código usa bibliotecas do display Oled escritas pela Adafruit Industries.
    "Adafruit invests time and resources providing this open source code,
    please support Adafruit and open-source hardware by purchasing
    products from Adafruit!" ------> http://www.adafruit.com
*/

#include <Adafruit_GFX.h> // Inclui a biblioteca GFX.
#include <Adafruit_SSD1306.h> // Inclui a bibliteoca SSD1306.
Adafruit_SSD1306 display(-1); // Cria o objeto "display".

int contador = 0; // Cria uma variável do tipo número inteiro (integer) com o valor 0.

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // Inicia o objeto "display".
  display.setTextColor(WHITE); // Define a cor do texto como branca.
}

void loop() {
  // O código fica em loop, começando aqui.

  display.clearDisplay(); // Limpa o display.

  display.setTextSize(4); // Define o tamanho do texto.
  display.setCursor(0, 0); // Posiciona o cursor do texto.
  display.print(contador); // Imprime o valor da variável.
  display.display(); // Atualiza o display.
  delay(1000); // Pausa de 1000 milissegundos, ou 1 segundo.

  contador = contador + 1; // Atualiza o valor da variável, adicionando 1.

  // Final do código, volta para cima e repete o loop.
}
