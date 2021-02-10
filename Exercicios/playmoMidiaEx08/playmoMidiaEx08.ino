/*
  PlaymoMídia - toyart reprogramável
  desenvolvido por Artur Cordeiro - http://arturvc.net.br
  Fortaleza, 2021.
  |||||||||||||||||||||||||||||||||||||||||||||||||||
  Exercicio 08 - Laço "for"
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
  display.setTextSize(2); // Define o tamanho do texto.

  /* O laço "for" é uma repetição controlada,
      especificando o número de vezes que as funções são executadas:
       for (a; b; c) {
        código
       }
        a) começa com a iniciação da variável "i";
        b) em seguida é feito um teste de verificação para saber se "i" atende a condição especificada,
        caso positivo, são executados os códigos que estão entre as chaves { };
        c) então, o valor da variável "i" é atualizado, e repete o teste de verificação.
      Quando o valor da variável "i" não atender o que está especificado em b),
      o laço "for" é encerrado.
  */
  for (int i = 0; i < 64; i = i + 8) {
    display.setCursor(10, i); // Posiciona o cursor do texto.
    display.print("REPETIR"); // Imprime no display.
    display.display(); // Atualiza o display.
    delay(10); // Pausa.
  }

  display.clearDisplay(); // Limpa o display.
  display.display(); // Atualiza o display.
  delay(100); // Pausa.

  // Final do código, volta para cima e repete o loop.
}
