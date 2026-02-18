int button1 = 3;
int button2 = 5;
int button3 = 6;
int button4 = 8;
int button5 = 10;
int buzzer = 11;

void setup() {
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);
  pinMode(button5, INPUT_PULLUP);

  pinMode(buzzer, OUTPUT);
}

void loop() {

  if (digitalRead(button1) == LOW) {
    tone(buzzer, 659); // E5
  }

  else if (digitalRead(button2) == LOW) {
    tone(buzzer, 622); // D#5
  }

  else if (digitalRead(button3) == LOW) {
    tone(buzzer, 494); // B4
  }

  else if (digitalRead(button4) == LOW) {
    tone(buzzer, 587); // D5
  }

  else if (digitalRead(button5) == LOW) {
    tone(buzzer, 440); // A4
  }

  else {
    noTone(buzzer);
  }
}