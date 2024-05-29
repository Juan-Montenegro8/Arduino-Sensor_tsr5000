int led=3;
int Dosn=2;
int estado;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(Do  sn, INPUT);

}

void loop() {
  estado=digitalRead(Dosn);
  if(estado==HIGH){
    digitalWrite(led,HIGH);
    Serial.println("led ");
    Serial.print(estado);
    Serial.println(", ");
  }else{
    digitalWrite(led,LOW);
    Serial.println("led ");
    Serial.print(estado);
    Serial.println(", ");
  }
  delay(100);

}
