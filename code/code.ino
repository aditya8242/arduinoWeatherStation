#include <Wire.h>
#include <DHT.h>
#include "U8glib.h"

// DHT11 setup
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

// U8glib OLED setup (I2C - adjust if needed)
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0); // I2C,
address 0x3D (adjust if 0x3C)
//U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE); // I2C, Address 0x3C

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void draw(float temperature, float humidity) {
  u8g.setFont(u8g_font_8x13); // Smaller font (changed from 8x13)

  char temp_str[16];
  char humidity_str[16];

  dtostrf(temperature, 1, 2, temp_str);
  dtostrf(humidity, 1, 2, humidity_str);

  // Calculate text width for better spacing
  int16_t tempWidth = u8g.getStrWidth(temp_str);
  int16_t humidityWidth = u8g.getStrWidth(humidity_str);

  // Display with spacing adjustments
  u8g.drawStr(5, 10, "Temp:");
  u8g.drawStr(45, 10, temp_str);
  u8g.drawStr(45 + tempWidth + 5, 10, "C");

  u8g.drawStr(5, 30, "Humi:");
  u8g.drawStr(45, 30, humidity_str);
  u8g.drawStr(45 + humidityWidth + 5, 30, "%");
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor!");
    temperature = -99.0;
    humidity = -99.0;
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print("°C  Humidity: ");
  Serial.print(humidity);
  Serial.println("%");

  u8g.firstPage();
  do {
    draw(temperature, humidity);
  } while (u8g.nextPage());

  delay(2000);
}
