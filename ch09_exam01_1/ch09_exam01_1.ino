int pwm1value = 0; // 초기 pwm의 값 
boolean increasing = true;

void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // analogWrite() 함수를 이용해서 PWM을 만든다 
  Serial.println(pwm1value);
  analogWrite(5, pwm1value);
  delay(500);

  if (increasing) {
    pwm1value += 10;
  } else {
    pwm1value -= 10;
  }

  if (pwm1value > 255) {
    increasing = false;
  } else if (pwm1value < 0) {
    increasing = true;
  }
}
