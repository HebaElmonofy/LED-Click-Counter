// C++ code
int red=3;
int yellow=5;
int green=7;
int button=10;
int counter=0;
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  if (digitalRead(button)==HIGH);
  {
    counter++;
    if(counter==1)
    digitalWrite(red,1);
    else if (counter==2)
      digitalWrite(yellow,1);
          else if (counter==3)
      digitalWrite(green,1);
      else {
      digitalWrite(red,0);
      digitalWrite(yellow,0);
      digitalWrite(green,0);
      counter=0;
    }
    delay(250);
  }
}