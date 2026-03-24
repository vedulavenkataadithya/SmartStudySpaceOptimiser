#define trig_pin 9
#define echo_pin 10
#define ldr_pin A0
#define led_pin 6
#define buzzer_pin 7
#define button_pin 5

#define light_min 200     
#define light_max 800    

#define good_distance_min 35
#define good_distance_max 50

#define sitting_time_limit 1800000

long duration;
int distance;
int light_value;

bool sitting = false;
unsigned long start_time = 0;

void setup()
{
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  pinMode(led_pin, OUTPUT);
  pinMode(buzzer_pin, OUTPUT);
  pinMode(button_pin, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop()
{

  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);

  duration = pulseIn(echo_pin, HIGH);
  distance = duration * 0.034 / 2;

  int sum = 0;
  for(int i = 0; i < 5; i++)
  {
    sum += analogRead(ldr_pin);
    delay(5);
  }
  light_value = sum / 5;

  bool light_ok = (light_value > light_min && light_value < light_max);
  bool posture_ok = (distance > good_distance_min && distance < good_distance_max);

  if (!light_ok)
    analogWrite(led_pin, 255);   
  else
    analogWrite(led_pin, 0);  

  if (!posture_ok && distance != 0)
    digitalWrite(buzzer_pin, HIGH);
  else
    digitalWrite(buzzer_pin, LOW);

  if (posture_ok && light_ok)
  {
    if (!sitting)
    {
      sitting = true;
      start_time = millis();
    }
  }
  else
  {
    sitting = false;
    start_time = 0;
  }

  if (sitting && millis() - start_time > sitting_time_limit)
  {
    digitalWrite(buzzer_pin, HIGH);
  }

  if (digitalRead(button_pin) == LOW)
  {
    sitting = false;
    start_time = 0;
    digitalWrite(buzzer_pin, LOW);

    Serial.println("button pressed - reset");
    delay(300); 
  }

  Serial.print("dist: ");
  Serial.print(distance);
  Serial.print(" light: ");
  Serial.print(light_value);
  Serial.print(" btn: ");
  Serial.println(digitalRead(button_pin));

  delay(200);
}
