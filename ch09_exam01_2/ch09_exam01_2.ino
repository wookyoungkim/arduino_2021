int pwm1value = 0; // 초기 pwm의 값 
int pwm2value = 255; // 초기 pwm의 값 

void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // analogWrite() 함수를 이용해서 PWM을 만든다 
  Serial.println(pwm1value);
  Serial.println(pwm2value);
  analogWrite(5, pwm1value);
  analogWrite(6, pwm2value);
  delay(500);

  pwm1value += 10;
  if (pwm1value > 255) {
    pwm1value = 0;
  }
  pwm2value = 255- pwm1value;
}
