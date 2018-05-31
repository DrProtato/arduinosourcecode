int ledPin = 8;
int inPin = 7;
int val = 0;
void setup () {
    
    Serial.begin(115200); 
    pinMode(ledPin, OUTPUT);
    pinMode(inPin, INPUT);
    }

void loop () {
     val = digitalRead(inPin);
     if(val && ledPin < 14){
      digitalWrite(ledPin, val);
      delay(500);
      ledPin++;
    }
    else if (ledPin > 7 && !val)
    {
      digitalWrite(ledPin, val);
      delay(500);
      ledPin--;
    }
}

/* hold button, leds turn on in order from 8 to 13
 release button, leds turn off from 13 to 8
 
 on = 8 to 13
 off = 13 to 8
 
 if on is at 10 then is changed to off
 then it goes down from 10
 
 and if off is at 11 and is changed to on, 
 then its starts from 11  */
