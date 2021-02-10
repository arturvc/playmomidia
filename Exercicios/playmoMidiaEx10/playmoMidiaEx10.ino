/*
  PlaymoMídia - toyart reprogramável
  desenvolvido por Artur Cordeiro - http://arturvc.net.br
  Fortaleza, 2021.
  |||||||||||||||||||||||||||||||||||||||||||||||||||
  Exercicio 10 - Array de String
  |||||||||||||||||||||||||||||||||||||||||||||||||||
  Este código usa bibliotecas do display Oled escritas pela Adafruit Industries.
    "Adafruit invests time and resources providing this open source code,
    please support Adafruit and open-source hardware by purchasing
    products from Adafruit!" ------> http://www.adafruit.com
*/

#include <Adafruit_GFX.h> // Inclui a biblioteca GFX.
#include <Adafruit_SSD1306.h> // Inclui a bibliteoca SSD1306.
Adafruit_SSD1306 display(-1); // Cria o objeto "display".

String texto[] = {"passado", "presente", "futuro", "agora", "ontem", "hoje", "instante", "momento", "tempo"};
// Cria o array de variável de texto e define os valores.
// Cada palavra é endereçada por um índice, que começa no 0,
// no caso, como são 9 ítens, o primeiro é 0, e o último é 8.
// Portanto, "agora" é representado por: texto[3].

int indice; // Cria a variável numérica, sem definir o valor.

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // Inicia o objeto "display".
  display.setTextColor(WHITE); // Define a cor do texto como branca.
}

void loop() {
  // O código fica em loop, começando aqui.

  indice = random(0, 9); // Define a variável com um valor aleatório de 0 a 9.

  display.setTextSize(2); // Define o tamanho do texto.
  display.clearDisplay(); // Limpa o display.

  display.setCursor(10, 1); // Posiciona o cursor do texto.
  display.print("Vamos no"); // Imprime no display.

  display.setCursor(10, 20); // Posiciona o cursor do texto.
  display.print(texto[indice]); // Imprime no display o array "texto" no valor especificado no índice.
  display.display(); // Atualiza o display.
  delay(2000); // Pausa.


  // Final do código, volta para cima e repete o loop.
}
