/*
  PlaymoMídia - toyart reprogramável
  desenvolvido por Artur Cordeiro - http://arturvc.net.br
  Fortaleza, 2021.
  |||||||||||||||||||||||||||||||||||||||||||||||||||
  Exercicio 11 - Elementos gráficos
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

  // Desenhando pixels
  display.drawPixel(20, 7, WHITE); // Desenha um ponto nas coordenadas x e y.
  display.drawPixel(30, 7, WHITE); // Desenha um ponto nas coordenadas x e y.
  display.drawPixel(40, 7, WHITE); // Desenha um ponto nas coordenadas x e y.
  display.display(); // Atualiza o display.
  delay(200); // Pausa.

  // Desenhando linha
  display.drawLine(0, 15, 128, 15, WHITE); // Desenha uma linha, de x0, y0 para x1, y1.
  display.display(); // Atualiza o display.
  delay(200); // Pausa.

  // Desenhando retângulos
  display.drawRect(10, 30, 20, 20, WHITE); // Desenha um retângulo, em x e y, com largura e altura.
  display.display(); // Atualiza o display.
  delay(2000); // Pausa.
  display.fillRect(35, 30, 20, 20, WHITE); // Desenha um retângulo preenchido, em x e y, com largura e altura.
  display.display(); // Atualiza o display.
  delay(200); // Pausa.

  // Desenhando círculos
  display.drawCircle(70, 40, 10, WHITE); // Desenha um circulo, em x e y, com raio.
  display.display(); // Atualiza o display.
  delay(200); // Pausa.
  display.fillCircle(95, 40, 10, WHITE); // Desenha um circulo preenchido, em x e y, com raio.
  display.display(); // Atualiza o display.
  delay(200); // Pausa.

  display.clearDisplay(); // Limpa o display.
  display.display(); // Atualiza o display.
  delay(10); // Pausa.


  // Final do código, volta para cima e repete o loop.
}
