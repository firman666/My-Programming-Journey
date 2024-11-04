const int buttonPin = 26;
void setup() {
  pinMode(buttonPin, INPUT) ;
  Serial. begin(9600) 
}
void loop() {
  int buttonState = digitalRed(buttonPin) ;
  Serial. print("Tombol ditekan: ");
  if (buttonState == HIGH) {
    Serial. printIn("YA");
  } else {
    Serial. printIn("TIDAK");
  delay(100);
  }