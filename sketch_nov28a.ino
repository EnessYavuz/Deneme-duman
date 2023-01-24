
int esikDegeri = 700;
int buzzerPin = 9;
int deger;
int led_k=7;
int led_s=6;
void setup() {
 Serial.begin(9600);
 pinMode(buzzerPin, OUTPUT);
 pinMode(led_k,OUTPUT);
 pinMode(led_s,OUTPUT);
}

void loop() {
 
  digitalWrite(led_k,HIGH);
 
  deger = analogRead(A0); //Sensörden analog değer okuyoruz.
  Serial.print("esikDegeri: ");
  Serial.println(esikDegeri);
  Serial.print("DEGER: ");
  Serial.println(deger);
  if (deger > esikDegeri) { //Sensörden okunan değer eşik değerinden büyükse çalışır.
    digitalWrite(led_s,HIGH);
    digitalWrite(buzzerPin, HIGH);
    delay(500);
    digitalWrite(buzzerPin, LOW);
    delay(500);
  } else { //Sensörden okunan değer eşik değerinin altındaysa çalışır.
    digitalWrite(buzzerPin, LOW);
  }

}
