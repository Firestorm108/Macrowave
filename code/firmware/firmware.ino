#include <Adafruit_NeoPixel.h>

#define PLA_PIN     5    
#define PETG_PIN    17  

#define BULB_PIN    14   
#define FAN_PIN     26    
#define MOTOR_PIN   4    
#define BED_PIN     27   

#define LED_PIN     13    
#define NUMPIXELS   8   

Adafruit_NeoPixel pixels(NUMPIXELS, LED_PIN, NEO_GRB + NEO_KHZ800);

unsigned long previousMillis = 0;
int bedInterval = 0;
bool bedState = false;

void setup() {
  pinMode(PLA_PIN, INPUT_PULLUP);
  pinMode(PETG_PIN, INPUT_PULLUP);

  pinMode(BULB_PIN, OUTPUT);
  pinMode(FAN_PIN, OUTPUT);
  pinMode(MOTOR_PIN, OUTPUT);
  pinMode(BED_PIN, OUTPUT);

  digitalWrite(BULB_PIN, LOW);
  digitalWrite(FAN_PIN, LOW);
  digitalWrite(MOTOR_PIN, LOW);
  digitalWrite(BED_PIN, LOW);

  pixels.begin();
  pixels.show(); 
}

void loop() {
  bool plaMode = digitalRead(PLA_PIN) == LOW;
  bool petgMode = digitalRead(PETG_PIN) == LOW;

  if (plaMode && !petgMode) {
    digitalWrite(BULB_PIN, HIGH);
    digitalWrite(FAN_PIN, HIGH);
    digitalWrite(MOTOR_PIN, HIGH);
    bedInterval = 15000;

    setAllPixels(pixels.Color(0, 0, 255));

    handleBedInterval(bedInterval);

  } else if (petgMode && !plaMode) {
    digitalWrite(BULB_PIN, HIGH);
    digitalWrite(FAN_PIN, HIGH);
    digitalWrite(MOTOR_PIN, HIGH);
    bedInterval = 10000;


    setAllPixels(pixels.Color(255, 165, 0));

    handleBedInterval(bedInterval);

  } else {

    digitalWrite(BULB_PIN, LOW);
    digitalWrite(FAN_PIN, LOW);
    digitalWrite(MOTOR_PIN, LOW);
    digitalWrite(BED_PIN, LOW);
    bedState = false;


    rainbowCycle(2);
  }
}

void setAllPixels(uint32_t c) {
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, c);
  }
  pixels.show();
}


void handleBedInterval(int interval) {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    bedState = !bedState;
    digitalWrite(BED_PIN, bedState ? HIGH : LOW);
  }
}

void rainbowCycle(uint8_t wait) {
  static uint16_t j = 0;
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, Wheel((i * 256 / NUMPIXELS + j) & 255));
  }
  pixels.show();
  j++;
  delay(wait);
}


uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if (WheelPos < 85) {
    return pixels.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } else if (WheelPos < 170) {
    WheelPos -= 85;
    return pixels.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  } else {
    WheelPos -= 170;
    return pixels.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  }
}

                                                                                       