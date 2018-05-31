#include<math.h>
int w = rand() % 100 + 1;
int h = rand() % 100 + 1;
void setup() {Serial.begin(115200);
  PrintAreaOfRectangle();
  PrintAreaOfCircle();
}
void loop(){}
void PrintAreaOfRectangle() { 
  Serial.println("Area of a rectangle ");
  Serial.println(h);
  Serial.println(w);
  Serial.println(h * w);
}
void PrintAreaOfCircle() {
  Serial.println("Area of circles");
  for(int g = 1; g < 6; g++){
    Serial.print("radii at ");
    Serial.println(g);
    Serial.println(floor (PI * g * g));
  }
  for(int r = 3; r < 12; r += 2){
    Serial.print("radii at ");
    Serial.println(r);
    Serial.println(floor (PI * r * r));
  }
}

