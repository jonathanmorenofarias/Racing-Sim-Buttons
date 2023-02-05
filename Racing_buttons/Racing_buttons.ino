#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(1000);
  DDRD = 0b00000000;				
	PORTD = 0b11111111;	
}

void loop() {
  uint8_t mpr = PIND & 0b11110000;
		if (mpr == 0b01110000) {
      Keyboard.press(KEY_LEFT_CTRL);
		  Keyboard.write(126);
      PORTB = 0b10000000;
      delay(10);
      Keyboard.release(KEY_LEFT_CTRL);
      PORTB = 0b00000000;
		}
		else if (mpr == 0b10110000) {
		  Keyboard.write(124);
      PORTB = 0b01000000;
      delay(200);
      PORTB = 0b00000000;
		}
    else if (mpr == 0b11010000) {
		  Keyboard.write(45);
      PORTB = 0b00100000;
      delay(50);
      PORTB = 0b00000000;
		}
    else if (mpr == 0b11100000) {
		  Keyboard.write(43);
      PORTB = 0b00010000;
      delay(50);
      PORTB = 0b00000000;
		}
}