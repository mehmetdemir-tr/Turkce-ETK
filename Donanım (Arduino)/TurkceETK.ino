// TÜRKÇE ELEKTRONİK TEKNİK KLAVYESİ (ETK) / ARDUİNO SİMÜLASYONU / mehmetdemir-tr / 2 Mayıs 2026 13:13

#include <Keyboard.h>

void sendUnicode(uint32_t unicodeHex) {
  Keyboard.press(KEY_LEFT_ALT);
  delay(10);
  String hexStr = String(unicodeHex, HEX);
  Keyboard.releaseAll();

void sendAltGrCombination(char key) {
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_RIGHT_ALT); 
  Keyboard.press(key);
  delay(50);
  Keyboard.releaseAll();
}

void setup() {
  delay(5000);
  Keyboard.begin();
  sendAltGrCombination('g');  // Test için eklenmiştir.

}

void loop() {
  
}
