#include <Adafruit_GFX.h>    // Include the Adafruit Graphics Library
#include <Adafruit_ILI9341.h> // Include the Adafruit ILI9341 library

#define TFT_CS 10
#define TFT_RST 9
#define TFT_DC 8

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  tft.begin(); // Initialize the display
  tft.setRotation(0); // Set rotation to 0 degrees
  tft.fillScreen(ILI9341_BLACK); // Clear the screen
  
  // Draw "E" at 0 degrees
  tft.fillRect(20, 40, 60, 10, ILI9341_WHITE); // Horizontal bar
  tft.fillRect(20, 40, 10, 70, ILI9341_WHITE); // Vertical bar
  tft.fillRect(20, 70, 60, 10, ILI9341_WHITE); // Middle horizontal bar

  delay(2000); // Delay for 2 seconds
  
  tft.setRotation(1); // Set rotation to 90 degrees
  tft.fillScreen(ILI9341_BLACK); // Clear the screen
  
  // Draw "E" at 90 degrees
  tft.fillRect(80, 40, 10, 60, ILI9341_WHITE); // Vertical bar
  tft.fillRect(80, 40, 60, 10, ILI9341_WHITE); // Horizontal bar
  tft.fillRect(80, 70, 60, 10, ILI9341_WHITE); // Middle horizontal bar
  
  delay(2000); // Delay for 2 seconds
  
  tft.setRotation(2); // Set rotation to 180 degrees
  tft.fillScreen(ILI9341_BLACK); // Clear the screen
  
  // Draw "E" at 180 degrees
  tft.fillRect(20, 150, 60, 10, ILI9341_WHITE); // Horizontal bar
  tft.fillRect(80, 150, 10, 70, ILI9341_WHITE); // Vertical bar
  tft.fillRect(20, 120, 60, 10, ILI9341_WHITE); // Middle horizontal bar
  
  delay(2000); // Delay for 2 seconds
  
  tft.setRotation(3); // Set rotation to 270 degrees
  tft.fillScreen(ILI9341_BLACK); // Clear the screen
  
  // Draw "E" at 270 degrees
  tft.fillRect(20, 40, 10, 60, ILI9341_WHITE); // Vertical bar
  tft.fillRect(20, 100, 60, 10, ILI9341_WHITE); // Horizontal bar
  tft.fillRect(20, 70, 60, 10, ILI9341_WHITE); // Middle horizontal bar
}

void loop() {
  // Nothing in the loop
}
