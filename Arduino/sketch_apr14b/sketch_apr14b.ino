#include <Adafruit_GFX.h>    // Include the Adafruit Graphics Library
#include <Adafruit_ILI9341.h> // Include the Adafruit ILI9341 library

#define TFT_CS 10
#define TFT_RST 9
#define TFT_DC 8

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST);

void drawSquaredA(int x, int y, int angle) {
  tft.setRotation(angle); // Set rotation
  
  // Horizontal bars
  tft.fillRect(x + 40, y + 40, 60, 10, ILI9341_WHITE); // Upper bar
  tft.fillRect(x + 30, y + 70, 80, 10, ILI9341_WHITE); // Middle bar
  
  // Diagonal lines
  tft.drawLine(x + 30, y + 70, x + 50, y + 40, ILI9341_WHITE); // Left diagonal
  tft.drawLine(x + 110, y + 70, x + 90, y + 40, ILI9341_WHITE); // Right diagonal
}

void setup() {
  tft.begin(); // Initialize the display
  tft.fillScreen(ILI9341_BLACK); // Clear the screen
  
  // Draw squared letter "A" at different angles
  drawSquaredA(0, 0, 0);   // 0 degrees
  delay(2000);
  tft.fillScreen(ILI9341_BLACK);
  
  drawSquaredA(0, 0, 1);   // 90 degrees
  delay(2000);
  tft.fillScreen(ILI9341_BLACK);
  
  drawSquaredA(0, 0, 2);   // 180 degrees
  delay(2000);
  tft.fillScreen(ILI9341_BLACK);
  
  drawSquaredA(0, 0, 3);   // 270 degrees
  delay(2000);
  tft.fillScreen(ILI9341_BLACK);
}

void loop() {
  // Nothing in the loop
}
