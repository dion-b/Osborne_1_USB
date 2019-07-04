/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  This example code is in the public domain.
 */

// Pin 13 has an LED connected on most Arduino boards.
// Pin 11 has the LED on Teensy 2.0
// Pin 6  has the LED on Teensy++ 2.0
// Pin 13 has the LED on Teensy 3.0
// give it a name:

int D0 = 10;
int D1 = 11;
int D2 = 12;
int D3 = 13;
int D4 = 14;
int D5 = 15;
int D6 = 16;
int D7 = 17;
int led = 6;
int wait = 0;
int keystate[64];

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(A6, OUTPUT);
  pinMode(A7, OUTPUT);
  pinMode(D0, INPUT_PULLUP);
  pinMode(D1, INPUT_PULLUP);
  pinMode(D2, INPUT_PULLUP);
  pinMode(D3, INPUT_PULLUP);
  pinMode(D4, INPUT_PULLUP);
  pinMode(D5, INPUT_PULLUP);
  pinMode(D6, INPUT_PULLUP);
  pinMode(D7, INPUT_PULLUP);
  for (int i=0;i<63;i++) keystate [i] = 0;
}

// the loop routine runs over and over again forever:
void loop() {
 digitalWrite(A0, LOW);
 
 if (digitalRead(D0) && keystate[0] == 1) {
   Keyboard.release(KEY_Z);
   keystate[0] = 0;
  }
 if (!digitalRead(D0) && keystate[0] == 0) {
    Keyboard.press(KEY_Z);
    keystate [0] = 1;
    }
 if (digitalRead(D1) && keystate[1] == 1) {
   Keyboard.release(KEY_X);
   keystate[1] = 0;
  }
 if (!digitalRead(D1) && keystate[1] == 0) {
    Keyboard.press(KEY_X);
    keystate [1] = 1;
    }   
 if (digitalRead(D2) && keystate[2] == 1) {
   Keyboard.release(KEY_C);
   keystate[2] = 0;
  }
 if (!digitalRead(D2) && keystate[2] == 0) {
    Keyboard.press(KEY_C);
    keystate [2] = 1;
    }
 if (digitalRead(D3) && keystate[3] == 1) {
   Keyboard.release(KEY_V);
   keystate[3] = 0;
  }
 if (!digitalRead(D3) && keystate[3] == 0) {
    Keyboard.press(KEY_V);
    keystate [3] = 1;
    }
 if (digitalRead(D4) && keystate[4] == 1) {
   Keyboard.release(KEY_B);
   keystate[4] = 0;
  }
 if (!digitalRead(D4) && keystate[4] == 0) {
    Keyboard.press(KEY_B);
    keystate [4] = 1;
    }   
 if (digitalRead(D5) && keystate[5] == 1) {
   Keyboard.release(KEY_N);
   keystate[5] = 0;
  }
 if (!digitalRead(D5) && keystate[5] == 0) {
    Keyboard.press(KEY_N);
    keystate [5] = 1;
    }
 if (digitalRead(D6) && keystate[6] == 1) {
   Keyboard.release(KEY_M);
   keystate[6] = 0;
  }
 if (!digitalRead(D6) && keystate[6] == 0) {
    Keyboard.press(KEY_M);
    keystate [6] = 1;
    }
 if (digitalRead(D7) && keystate[7] == 1) {
   Keyboard.release(KEY_COMMA);
   keystate[7] = 0;
  }
 if (!digitalRead(D7) && keystate[7] == 0) {
    Keyboard.press(KEY_COMMA);
    keystate [7] = 1;
    }      
 digitalWrite(A0, HIGH);

 digitalWrite(A1, LOW);
 if (digitalRead(D0) && keystate[8] == 1 && keystate[59] == 0) {
   Keyboard.release(KEY_ESC);
   keystate[8] = 0;
  }
 if (!digitalRead(D0) && keystate[8] == 0 && keystate[59] == 0) {
    Keyboard.press(KEY_ESC);
    keystate [8] = 1;
    }
 if (digitalRead(D1) && keystate[9] == 1 && keystate[59] == 0) {
   Keyboard.release(KEY_TAB);
   keystate[9] = 0;
  }
 if (!digitalRead(D1) && keystate[9] == 0 && keystate[59] == 0) {
    Keyboard.press(KEY_TAB);
    keystate [9] = 1;
    }   
 if (digitalRead(D2) && keystate[10] == 1 && keystate[59] == 0) {
   Keyboard.release(MODIFIERKEY_CTRL);
   keystate[10] = 0;
  }
 if (!digitalRead(D2) && keystate[10] == 0 && keystate[59] == 0) {
    Keyboard.press(MODIFIERKEY_CTRL);
    keystate [10] = 1;
    }
 if (digitalRead(D0) && keystate[8] == 1 && keystate[59] == 1) {
   Keyboard.release(KEY_DELETE);
   keystate[8] = 0;
  }
 if (!digitalRead(D0) && keystate[8] == 0 && keystate[59] == 1) {
    Keyboard.press(KEY_DELETE);
    keystate [8] = 1;
    }
 if (digitalRead(D1) && keystate[9] == 1 && keystate[59] == 1) {
   Keyboard.release(KEY_BACKSPACE);
   keystate[9] = 0;
  }
 if (!digitalRead(D1) && keystate[9] == 0 && keystate[59] == 1) {
    Keyboard.press(KEY_BACKSPACE);
    keystate [9] = 1;
    }   
 if (digitalRead(D2) && keystate[10] == 1 && keystate[59] == 1) {
   Keyboard.release(MODIFIERKEY_ALT);
   keystate[10] = 0;
  }
 if (!digitalRead(D2) && keystate[10] == 0 && keystate[59] == 1) {
    Keyboard.press(MODIFIERKEY_ALT);
    keystate [10] = 1;
    }
 if (digitalRead(D3) && keystate[11] == 1) {}
 if (!digitalRead(D3) && keystate[11] == 0) {}
 if (digitalRead(D4) && keystate[12] == 1) {
   Keyboard.release(MODIFIERKEY_SHIFT);
   keystate[12] = 0;
  }
 if (!digitalRead(D4) && keystate[12] == 0) {
    Keyboard.press(MODIFIERKEY_SHIFT);
    keystate [12] = 1;
    }   
 if (digitalRead(D5) && keystate[13] == 1) {
   Keyboard.release(KEY_RETURN);
   keystate[13] = 0;
  }
 if (!digitalRead(D5) && keystate[13] == 0) {
    Keyboard.press(KEY_RETURN);
    keystate [13] = 1;
    }
 if (digitalRead(D6) && keystate[14] == 1) {
   Keyboard.release(KEY_QUOTE);
   keystate[14] = 0;
  }
 if (!digitalRead(D6) && keystate[14] == 0) {
    Keyboard.press(KEY_QUOTE);
    keystate [14] = 1;
    }
 if (digitalRead(D7) && keystate[15] == 1) {
   Keyboard.release(KEY_RIGHT_BRACE);
   keystate[15] = 0;
  }
 if (!digitalRead(D7) && keystate[15] == 0) {
    Keyboard.press(KEY_RIGHT_BRACE);
    keystate [15] = 1;
    }      
 digitalWrite(A1, HIGH);
 
 digitalWrite(A2, LOW);
  if (digitalRead(D0) && keystate[16] == 1) {
   Keyboard.release(KEY_A);
   keystate[16] = 0;
  }
 if (!digitalRead(D0) && keystate[16] == 0) {
    Keyboard.press(KEY_A);
    keystate [16] = 1;
    }
 if (digitalRead(D1) && keystate[17] == 1) {
   Keyboard.release(KEY_S);
   keystate[17] = 0;
  }
 if (!digitalRead(D1) && keystate[17] == 0) {
    Keyboard.press(KEY_S);
    keystate [17] = 1;
    }   
 if (digitalRead(D2) && keystate[18] == 1) {
   Keyboard.release(KEY_D);
   keystate[18] = 0;
  }
 if (!digitalRead(D2) && keystate[18] == 0) {
    Keyboard.press(KEY_D);
    keystate [18] = 1;
    }
 if (digitalRead(D3) && keystate[19] == 1) {
   Keyboard.release(KEY_F);
   keystate[19] = 0;
  }
 if (!digitalRead(D3) && keystate[19] == 0) {
    Keyboard.press(KEY_F);
    keystate [19] = 1;
    }
 if (digitalRead(D4) && keystate[20] == 1) {
   Keyboard.release(KEY_G);
   keystate[20] = 0;
  }
 if (!digitalRead(D4) && keystate[20] == 0) {
    Keyboard.press(KEY_G);
    keystate [20] = 1;
    }   
 if (digitalRead(D5) && keystate[21] == 1) {
   Keyboard.release(KEY_H);
   keystate[21] = 0;
  }
 if (!digitalRead(D5) && keystate[21] == 0) {
    Keyboard.press(KEY_H);
    keystate [21] = 1;
    }
 if (digitalRead(D6) && keystate[22] == 1) {
   Keyboard.release(KEY_J);
   keystate[22] = 0;
  }
 if (!digitalRead(D6) && keystate[22] == 0) {
    Keyboard.press(KEY_J);
    keystate [22] = 1;
    }
 if (digitalRead(D7) && keystate[23] == 1) {
   Keyboard.release(KEY_K);
   keystate[23] = 0;
  }
 if (!digitalRead(D7) && keystate[23] == 0) {
    Keyboard.press(KEY_K);
    keystate [23] = 1;
    }      
digitalWrite(A2, HIGH);

 digitalWrite(A3, LOW);
 if (digitalRead(D0) && keystate[24] == 1) {
   Keyboard.release(KEY_RIGHT);
   keystate[24] = 0;
  }
 if (!digitalRead(D0) && keystate[24] == 0) {
    Keyboard.press(KEY_RIGHT);
    keystate [24] = 1;
    }
 if (digitalRead(D1) && keystate[25] == 1) {
   Keyboard.release(KEY_DOWN);
   keystate[25] = 0;
  }
 if (!digitalRead(D1) && keystate[25] == 0) {
    Keyboard.press(KEY_DOWN);
    keystate [25] = 1;
    }   
 if (digitalRead(D2) && keystate[26] == 1) {
   Keyboard.release(KEY_MINUS);
   keystate[26] = 0;
  }
 if (!digitalRead(D2) && keystate[26] == 0) {
    Keyboard.press(KEY_MINUS);
    keystate [26] = 1;
    }
 if (digitalRead(D3) && keystate[27] == 1) {
   Keyboard.release(KEY_SLASH);
   keystate[27] = 0;
  }
 if (!digitalRead(D3) && keystate[27] == 0) {
    Keyboard.press(KEY_SLASH);
    keystate [27] = 1;
    }
 if (digitalRead(D4) && keystate[28] == 1) {
   Keyboard.release(KEY_SEMICOLON);
   keystate[28] = 0;
  }
 if (!digitalRead(D4) && keystate[28] == 0) {
    Keyboard.press(KEY_SEMICOLON);
    keystate [28] = 1;
    }   
 if (digitalRead(D5) && keystate[29] == 1) {
   Keyboard.release(KEY_BACKSLASH);
   keystate[29] = 0;
  }
 if (!digitalRead(D5) && keystate[29] == 0) {
    Keyboard.press(KEY_BACKSLASH);
    keystate [29] = 1;
    }
 if (digitalRead(D6) && keystate[30] == 1) {
   Keyboard.release(KEY_L);
   keystate[30] = 0;
  }
 if (!digitalRead(D6) && keystate[30] == 0) {
    Keyboard.press(KEY_L);
    keystate [30] = 1;
    }
 if (digitalRead(D7) && keystate[31] == 1) {
   Keyboard.release(KEY_EQUAL);
   keystate[31] = 0;
  }
 if (!digitalRead(D7) && keystate[31] == 0) {
    Keyboard.press(KEY_EQUAL);
    keystate [31] = 1;
    }       
digitalWrite(A3, HIGH);

 digitalWrite(A4, LOW);
  if (digitalRead(D0) && keystate[32] == 1) {
   Keyboard.release(KEY_Q);
   keystate[32] = 0;
  }
 if (!digitalRead(D0) && keystate[32] == 0) {
    Keyboard.press(KEY_Q);
    keystate [32] = 1;
    }
 if (digitalRead(D1) && keystate[33] == 1) {
   Keyboard.release(KEY_W);
   keystate[33] = 0;
  }
 if (!digitalRead(D1) && keystate[33] == 0) {
    Keyboard.press(KEY_W);
    keystate [33] = 1;
    }   
 if (digitalRead(D2) && keystate[34] == 1) {
   Keyboard.release(KEY_E);
   keystate[34] = 0;
  }
 if (!digitalRead(D2) && keystate[34] == 0) {
    Keyboard.press(KEY_E);
    keystate [34] = 1;
    }
 if (digitalRead(D3) && keystate[35] == 1) {
   Keyboard.release(KEY_R);
   keystate[35] = 0;
  }
 if (!digitalRead(D3) && keystate[35] == 0) {
    Keyboard.press(KEY_R);
    keystate [35] = 1;
    }
 if (digitalRead(D4) && keystate[36] == 1) {
   Keyboard.release(KEY_T);
   keystate[36] = 0;
  }
 if (!digitalRead(D4) && keystate[36] == 0) {
    Keyboard.press(KEY_T);
    keystate [36] = 1;
    }   
 if (digitalRead(D5) && keystate[37] == 1) {
   Keyboard.release(KEY_Y);
   keystate[37] = 0;
  }
 if (!digitalRead(D5) && keystate[37] == 0) {
    Keyboard.press(KEY_Y);
    keystate [37] = 1;
    }
 if (digitalRead(D6) && keystate[38] == 1) {
   Keyboard.release(KEY_U);
   keystate[38] = 0;
  }
 if (!digitalRead(D6) && keystate[38] == 0) {
    Keyboard.press(KEY_U);
    keystate [38] = 1;
    }
 if (digitalRead(D7) && keystate[39] == 1) {
   Keyboard.release(KEY_I);
   keystate[39] = 0;
  }
 if (!digitalRead(D7) && keystate[39] == 0) {
    Keyboard.press(KEY_I);
    keystate [39] = 1;
    }      
digitalWrite(A4, HIGH);

 digitalWrite(A5, LOW);
  if (digitalRead(D0) && keystate[40] == 1) {
   Keyboard.release(KEY_UP);
   keystate[40] = 0;
  }
 if (!digitalRead(D0) && keystate[40] == 0) {
    Keyboard.press(KEY_UP);
    keystate [40] = 1;
    }
 if (digitalRead(D1) && keystate[41] == 1) {
   Keyboard.release(KEY_LEFT);
   keystate[41] = 0;
  }
 if (!digitalRead(D1) && keystate[41] == 0) {
    Keyboard.press(KEY_LEFT);
    keystate [41] = 1;
    }   
 if (digitalRead(D2) && keystate[42] == 1) {
   Keyboard.release(KEY_0);
   keystate[42] = 0;
  }
 if (!digitalRead(D2) && keystate[42] == 0) {
    Keyboard.press(KEY_0);
    keystate [42] = 1;
    }
 if (digitalRead(D3) && keystate[43] == 1) {
   Keyboard.release(KEY_SPACE);
   keystate[43] = 0;
  }
 if (!digitalRead(D3) && keystate[43] == 0) {
    Keyboard.press(KEY_SPACE);
    keystate [43] = 1;
    }
 if (digitalRead(D4) && keystate[44] == 1) {
   Keyboard.release(KEY_PERIOD);
   keystate[44] = 0;
  }
 if (!digitalRead(D4) && keystate[44] == 0) {
    Keyboard.press(KEY_PERIOD);
    keystate [44] = 1;
    }   
 if (digitalRead(D5) && keystate[45] == 1) {
   Keyboard.release(KEY_P);
   keystate[45] = 0;
  }
 if (!digitalRead(D5) && keystate[45] == 0) {
    Keyboard.press(KEY_P);
    keystate [45] = 1;
    }
 if (digitalRead(D6) && keystate[46] == 1) {
   Keyboard.release(KEY_O);
   keystate[46] = 0;
  }
 if (!digitalRead(D6) && keystate[46] == 0) {
    Keyboard.press(KEY_O);
    keystate [46] = 1;
    }
 if (digitalRead(D7) && keystate[47] == 1) {
   Keyboard.release(KEY_9);
   keystate[47] = 0;
  }
 if (!digitalRead(D7) && keystate[47] == 0) {
    Keyboard.press(KEY_9);
    keystate [47] = 1;
    }      
digitalWrite(A5, HIGH);
 
 digitalWrite(A6, LOW);
   if (digitalRead(D0) && keystate[48] == 1) {
   Keyboard.release(KEY_1);
   keystate[48] = 0;
  }
 if (!digitalRead(D0) && keystate[48] == 0) {
    Keyboard.press(KEY_1);
    keystate [48] = 1;
    }
 if (digitalRead(D1) && keystate[49] == 1) {
   Keyboard.release(KEY_2);
   keystate[49] = 0;
  }
 if (!digitalRead(D1) && keystate[49] == 0) {
    Keyboard.press(KEY_2);
    keystate [49] = 1;
    }   
 if (digitalRead(D2) && keystate[50] == 1) {
   Keyboard.release(KEY_3);
   keystate[50] = 0;
  }
 if (!digitalRead(D2) && keystate[50] == 0) {
    Keyboard.press(KEY_3);
    keystate [50] = 1;
    }
 if (digitalRead(D3) && keystate[51] == 1) {
   Keyboard.release(KEY_4);
   keystate[51] = 0;
  }
 if (!digitalRead(D3) && keystate[51] == 0) {
    Keyboard.press(KEY_4);
    keystate [51] = 1;
    }
 if (digitalRead(D4) && keystate[52] == 1) {
   Keyboard.release(KEY_5);
   keystate[52] = 0;
  }
 if (!digitalRead(D4) && keystate[52] == 0) {
    Keyboard.press(KEY_5);
    keystate [52] = 1;
    }   
 if (digitalRead(D5) && keystate[53] == 1) {
   Keyboard.release(KEY_6);
   keystate[53] = 0;
  }
 if (!digitalRead(D5) && keystate[53] == 0) {
    Keyboard.press(KEY_6);
    keystate [53] = 1;
    }
 if (digitalRead(D6) && keystate[54] == 1) {
   Keyboard.release(KEY_7);
   keystate[54] = 0;
  }
 if (!digitalRead(D6) && keystate[54] == 0) {
    Keyboard.press(KEY_7);
    keystate [54] = 1;
    }
 if (digitalRead(D7) && keystate[55] == 1) {
   Keyboard.release(KEY_8);
   keystate[55] = 0;
  }
 if (!digitalRead(D7) && keystate[55] == 0) {
    Keyboard.press(KEY_8);
    keystate [55] = 1;
    }      

digitalWrite(A6, HIGH);
 
  digitalWrite(A7, LOW);
 if (digitalRead(D3) && keystate[59] == 1) {
   Keyboard.release(KEY_CAPS_LOCK);
   keystate[59] = 0;
  }
 if (!digitalRead(D3) && keystate[59] == 0) {
    Keyboard.press(KEY_CAPS_LOCK);
    keystate [59] = 1;
    }
digitalWrite(A7, HIGH);

delay(wait);
    }
  
