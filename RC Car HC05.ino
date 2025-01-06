

#define led1 = 13 
#define led2 = 8 // Break led
#define in1 = 12 // left forward
#define in2 = 11 // left reverse
#define in3 = 10 // right forward
#define in4 = 9 // right reverse

void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT); // Break led
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char inputvalue = char(Serial.read());
    if (inputvalue == 'F') {
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(13,HIGH);
    }
    else if (inputvalue == 'B') {
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(8,HIGH); // Break light
      digitalWrite(13,HIGH);

    }

    else if (inputvalue == 'R') {
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(13,HIGH);
    }

    else if (inputvalue == 'L') {
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      digitalWrite(13,HIGH); // LED

    }

    else if (inputvalue == 'C') {
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(13,HIGH); // LED

    }

    else if (inputvalue == 'A') {
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(13,HIGH);

    }

    else if (inputvalue == 'O') {
      digitalWrite(13, HIGH);
    }

  // Motion off
    else if (inputvalue == 'N') {
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
    }

  // ALL STOP Start OF
    else if (inputvalue == 'S') {
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(13, LOW);

    }
  }
}
