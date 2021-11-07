const int flameSens = A0; // affectation d'une varialble au pin A0
const int Speaker = 8;    // affectation d'une varialble au pin digital 8
int valeur_flame;        

void setup() {
  Serial.begin(9600);
  pinMode(Speaker, OUTPUT);
  pinMode(flameSens, INPUT);
}

void loop() {
  valeur_flame = analogRead(flameSens);  // stokage de la valeur renvoyer par le pin A0 dans la variable valeur_flame

  if (valeur_flame < 1023)
  {
    tone(Speaker, 800 , 800);
    delay(200);
    tone(Speaker, 600 , 800);
    delay(200);
  }
  else
  {
    digitalWrite(Speaker , LOW);
  }

  Serial.println(valeur_flame);


}
