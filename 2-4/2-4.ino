void setup() {
  // put your setup code here, to run once:

}


void loop()
{
  int sum, i;

  // for 문 사용
  sum = 0;
  for(i = 1; i < 100; i += 2){
    sum += i;
  }
  Serial.print("for      : ");
  Serial.println(sum);  // while 문 사용
  sum = 0;
  i = 1;
  while(i < 100){
    sum += i;
    i += 2;
  }
  Serial.print("while    : ");
  Serial.println(sum);

  // do-while 문 사용
  sum = 0;
  i = 1;
  do{
    sum += i;
    i += 2;
  }while(i < 100);
  Serial.print("do-while : ");
  Serial.println(sum);

  while(true);
}void setup() {
  // put your setup code here, to run once:

}


void loop()
{
  int sum, i;

  // for 문 사용
  sum = 0;
  for(i = 1; i < 100; i += 2){
    sum += i;
  }
  Serial.print("for      : ");
  Serial.println(sum);  // while 문 사용
  sum = 0;
  i = 1;
  while(i < 100){
    sum += i;
    i += 2;
  }
  Serial.print("while    : ");
  Serial.println(sum);

  // do-while 문 사용
  sum = 0;
  i = 1;
  do{
    sum += i;
    i += 2;
  }while(i < 100);
  Serial.print("do-while : ");
  Serial.println(sum);

  while(true);
}
