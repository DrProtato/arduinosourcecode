/* This is the COMPLETED code
   for the ThinkerShield LED Magic Sign Project
   Written by Thinkspace www.maas.museum/thinkspace
   Ver 1.2   
*/

#define NUM_ELEM(x) (sizeof (x) / sizeof (*(x)))
    
// Variables for pins.

int led1Pin = 8;
int led2Pin = 9;
int led3Pin = 10;
int led4Pin = 11;
int led5Pin = 12;
int led6Pin = 13;

// The word to display.
int phrase[] = 
{
  0,0,0,0,0,0,
  
  0,0,0,0,0,0, //D
  1,1,1,1,1,1,
  1,0,0,0,0,1,
  1,0,0,0,0,1,
  0,1,1,1,1,0,
  0,0,0,0,0,0,
  
  0,0,0,0,0,0, //A
  1,1,1,1,1,0,
  0,0,1,0,0,1,
  0,0,1,0,0,1,
  1,1,1,1,1,0,
  0,0,0,0,0,0,
  
  0,0,0,0,0,0, //N
  1,1,1,1,1,1,
  0,0,0,1,1,0,
  0,0,1,1,0,0,
  1,1,1,1,1,1,
  0,0,0,0,0,0,
   
  0,0,0,0,0,0,
  1,0,0,0,0,1, //I
  1,1,1,1,1,1,
  1,0,0,0,0,1,
  0,0,0,0,0,0,
  
  0,0,0,0,0,0, //E
  1,1,1,1,1,1,
  1,0,1,1,0,1,
  1,0,1,1,0,1,
  1,0,1,1,0,1,
  0,0,0,0,0,0,

  0,0,0,0,0,0, //L
  1,1,1,1,1,1,
  1,0,0,0,0,0,
  1,0,0,0,0,0,
  0,0,0,0,0,0,
    
  0,0,0,0,0,0, //G
  0,1,1,1,1,0,
  1,0,0,0,0,1,
  1,0,1,0,0,1,
  1,1,1,0,1,0,
  0,0,0,0,0,0,
    
  0,0,0,0,0,0, //R
  1,1,1,1,1,0,
  0,0,1,0,0,1,
  0,1,1,0,0,1,
  1,1,0,1,1,0,
  0,0,0,0,0,0,
    
  0,0,0,0,0,0, //E
  1,1,1,1,1,1,
  1,0,1,1,0,1,
  1,0,1,1,0,1,
  1,0,1,1,0,1,
  0,0,0,0,0,0,
    
  0,0,0,0,0,0, //E
  1,1,1,1,1,1,
  1,0,1,1,0,1,
  1,0,1,1,0,1,
  1,0,1,1,0,1,
  0,0,0,0,0,0,
    
  0,0,0,0,0,0, //F
  1,1,1,1,1,1,
  0,0,1,0,0,1,
  0,0,1,0,0,1,
  0,0,0,0,0,0,
    
  0,0,0,0,0,0, //F
  1,1,1,1,1,1,
  0,0,1,0,0,1,
  0,0,1,0,0,1,
  0,0,0,0,0,0,
  
  0,0,0,0,0,0,

};

int ledPinArray[6] = { led1Pin, led2Pin, led3Pin, led4Pin, led5Pin, led6Pin };


int columnDelay;
int sizeWord = 0;

// Setup pins for use.
void setup()
{
  pinMode(led1Pin, OUTPUT); 
  pinMode(led2Pin, OUTPUT); 
  pinMode(led3Pin, OUTPUT); 
  pinMode(led4Pin, OUTPUT); 
  pinMode(led5Pin, OUTPUT);  
  pinMode(led6Pin, OUTPUT);  

  columnDelay = 2.5;
  sizeWord = NUM_ELEM(phrase);
}


// Main loop which runs infinitely. 
void loop()
{
  // Display the word using the printword function.
  printWord(phrase);
  delay(5);
}


void printWord(int wordVar[]) 
{
  int numRows = sizeWord / 6;
  for(int j = 0; j < numRows; j++) 
  {
    for(int i = 0; i<6; i++) 
    {
      digitalWrite(ledPinArray[i], wordVar[i+j*6]);
    }
    delay(columnDelay);
  }
} 

