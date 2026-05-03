// TÜRKÇE ELEKTRONİK TEKNİK KLAVYESİ (ETK) / ARDUİNO SİMÜLASYONU / mehmetdemir-tr / 2 Mayıs 2026 13:13

#include <Keyboard.h>

void sendSymbol(char key) {
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(key);
  delay(50);
  Keyboard.releaseAll();
}

void setup() {
  delay(5000);
  Keyboard.begin();

}

void loop() {
  
}
