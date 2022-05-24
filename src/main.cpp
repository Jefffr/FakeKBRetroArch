#include <Arduino.h>
#include <Keyboard.h>
#include <ezButton.h>

ezButton button_A(2);
ezButton button_B(3);
ezButton button_C(4);
ezButton button_D(5);
ezButton button_E(6);
ezButton button_F(7);
ezButton button_G(8);
ezButton button_H(9);
ezButton button_I(10);
ezButton button_J(16);

void setup() {
  Serial.begin(9600);
  button_A.setDebounceTime(50);
  button_B.setDebounceTime(50);
  button_C.setDebounceTime(50);
  button_D.setDebounceTime(50);
  button_E.setDebounceTime(50);
  button_F.setDebounceTime(50);
  button_G.setDebounceTime(50);
  button_H.setDebounceTime(50);
  button_I.setDebounceTime(50);
  button_J.setDebounceTime(50);
  Keyboard.begin(KeyboardLayout_fr_FR);
}

void loop() {
  button_A.loop();
  button_B.loop();
  button_C.loop();
  button_D.loop();
  button_E.loop();
  button_F.loop();
  button_G.loop();
  button_H.loop();
  button_I.loop();
  button_J.loop();

  if (button_A.isPressed()) Keyboard.press('a');
  if (button_A.isReleased()) Keyboard.release('a');

  if (button_B.isPressed()) Keyboard.press('b');
  if (button_B.isReleased()) Keyboard.release('b');

  if (button_C.isPressed()) Keyboard.press('c');
  if (button_C.isReleased()) Keyboard.release('c');

  if (button_D.isPressed()) Keyboard.press('d');
  if (button_D.isReleased()) Keyboard.release('d');

  if (button_E.isPressed()) Keyboard.press('e');
  if (button_E.isReleased()) Keyboard.release('e');

  if (button_F.isPressed()) Keyboard.press('f');
  if (button_F.isReleased()) Keyboard.release('f');

  if (button_G.isPressed()) Keyboard.press('g');
  if (button_G.isReleased()) Keyboard.release('g');

  if (button_H.isPressed()) Keyboard.press('h');
  if (button_H.isReleased()) Keyboard.release('h');

  if (button_I.isPressed()) Keyboard.press('i');
  if (button_I.isReleased()) Keyboard.release('i');

  if (button_J.isPressed()) Keyboard.press('j');
  if (button_J.isReleased()) Keyboard.release('j');
}