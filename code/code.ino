#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>

#define TFT_CS 7  
#define TFT_RST 8
#define TFT_DC 9
#define TFT_MOSI 3
#define TFT_SCK 2
#define TFT_LED 12
#define TFT_MISO 0

String material = "plastic";

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  Serial.begin(115200);
  tft.begin();
  tft.fillScreen(ILI9341_BLACK);
  tft.setTextColor(ILI9341_WHITE);
  tft.setTextSize(3);
  tft.setCursor(50, 50);
  tft.print("Initializing!!!");
  delay(5000);
  tft.fillScreen(ILI9341_BLACK);
  tft.setCursor(0, 50);
  tft.print("PLA");
  tft.setCursor(50, 50);
  tft.print("PETG");
  delay(5000);

  digitalWrite(10, HIGH);

  bool switchIsOn = digitalRead(16) == LOW;

  if (switchIsOn) {
    Serial.println("digitalRead(TOGGLE_SWITCH_PIN) == LOW");
    tft.fillScreen(ILI9341_BLACK);
    tft.setCursor(50, 50);
    material = "PLA";
    PWM(material);
    tft.print("Setting up for PLA");
  } else {
    tft.fillScreen(ILI9341_BLACK);
    tft.setCursor(50, 50);
    material = "PETG";
    PWM(material);
    tft.print("Setting up for PETG");
  }
}

void END() {
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(10, LOW);

  delay(30000);
  digitalWrite(1, LOW);
}

void PWM(String material) {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(11, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  analogWriteFreq(1000);
  analogWrite(5, 0);
  analogWrite(6, 0);
  int targetTempC = 0;
  if (material == "PLA") {
    targetTempC = 60;
  } else if (material == "PETG") {
    targetTempC = 80;
  }
  tft.fillScreen(ILI9341_BLACK);
  tft.setCursor(50, 50);
  int time = 60;
  while (time > 0) {
    delay(60000);
    time = time - 1;
    if (time == 0) {
      END();
    }
  }
}

void loop() {
  int probe1State = digitalRead(11);
  int probe2State = digitalRead(4);
  int pwm1 = (probe1State == LOW) ? 255 : 0;
  int pwm2 = (probe2State == LOW) ? 255 : 0;
  analogWrite(5, pwm1);
  analogWrite(6, pwm2);
}

