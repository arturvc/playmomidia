/*
  PlaymoMídia - toyart reprogramável
  desenvolvido por Artur Cordeiro - http://arturvc.net.br
  Fortaleza, 2021.
  |||||||||||||||||||||||||||||||||||||||||||||||||||
  Exercicio 04 - Tamanho do texto
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
}

void loop() {
  // O código fica em loop, começando aqui.

  display.clearDisplay(); // Limpa o display.

  display.setTextSize(1); // Define o tamanho do texto.
  display.setCursor(0, 0); // Posiciona o cursor do texto.
  display.print("Texto tamanho 1"); // Imprime o texto que está entre aspas.
  display.display(); // Atualiza o display.
  delay(1000); // Pausa de 1000 milissegundos, ou 1 segundo.

  display.setTextSize(2); // Define o tamanho do texto.
  display.setCursor(0, 12); // Posiciona o cursor do texto.
  display.print("Tamanho 2"); // Imprime o texto que está entre aspas.
  display.display(); // Atualiza o display.
  delay(1000); // Pausa de 1000 milissegundos, ou 1 segundo.

  display.setTextSize(3); // Define o tamanho do texto.
  display.setCursor(0, 32); // Posiciona o cursor do texto.
  display.print("Tam. 3"); // Imprime o texto que está entre aspas.
  display.display(); // Atualiza o display.
  delay(1000); // Pausa de 1000 milissegundos, ou 1 segundo.

  display.clearDisplay(); // Limpa o display.
  display.display(); // Atualiza o display.
  delay(500); // Pausa de 500 milissegundos, ou 0,5 segundo.


  display.clearDisplay(); // Limpa o display.

  display.setTextSize(4); // Define o tamanho do texto.
  display.setCursor(0, 0); // Posiciona o cursor do texto.
  display.print("T. 4"); // Imprime o texto que está entre aspas.
  display.display(); // Atualiza o display.
  delay(1000); // Pausa de 1000 milissegundos, ou 1 segundo.

  display.setTextSize(5); // Define o tamanho do texto.
  display.setCursor(0, 30); // Posiciona o cursor do texto.
  display.print("T 5"); // Imprime o texto que está entre aspas.
  display.display(); // Atualiza o display.
  delay(1000); // Pausa de 1000 milissegundos, ou 1 segundo.

  display.clearDisplay(); // Limpa o display.
  display.display(); // Atualiza o display.
  delay(1000); // Pausa de 1000 milissegundos, ou 1 segundo.

  // Final do código, volta para cima e repete o loop.
}
