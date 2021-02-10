/*
  PlaymoMídia - toyart reprogramável
  desenvolvido por Artur Cordeiro - http://arturvc.net.br
  Fortaleza, 2021.
  |||||||||||||||||||||||||||||||||||||||||||||||||||
  Exercicio 01 - Hello World
  |||||||||||||||||||||||||||||||||||||||||||||||||||

  Este código usa bibliotecas do display Oled escritas pela Adafruit Industries.

    "Adafruit invests time and resources providing this open source code,
    please support Adafruit and open-source hardware by purchasing
    products from Adafruit!" ------> http://www.adafruit.com

*/


// *** Bibliotecas Adafruit GFX e Adafruit SSD1306

#include <Adafruit_GFX.h> // Inclui a biblioteca GFX.
#include <Adafruit_SSD1306.h> // Inclui a bibliteoca SSD1306.

Adafruit_SSD1306 display(-1); // Cria o objeto "display".
// O "-1" faz parte da configuração de ligação.

// ***


void setup()
{
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // Inicia o objeto "display".
  display.setTextColor(WHITE); // Define a cor do texto como branca.
}

void loop() {

  // O código fica em loop, começando aqui.

  display.clearDisplay(); // Limpa o display.
  display.setCursor(0, 0); // Posiciona o cursor do texto nas coordenadas 0 e 0.
  display.print("Viva a Terra Gaia!"); // Imprime o texto que está entre aspas.
  display.display(); // Atualiza o display para exibir o que foi desenhado. Neste caso, a frase acima.
  delay(2000); // Pausa de 2000 milisegundos, ou 2 segundos.

  display.clearDisplay(); // Limpa o display.
  display.display(); // Atualiza o display para exibir o que foi desenhado. Neste caso, apaga tudo.
  delay(1000); // Pausa de 1000 milisegundos, ou 1 segundo.

  // Final do código, volta pra cima para repetir o loop.
}
