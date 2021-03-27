
// Add pin initialization -- the button is connected to pin 20
#define button  20
void setup() {
  
  // Setup serial monitor connection
  Serial.begin(9600);

  // Setup inputs/outputs
  pinMode(button, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

  // Get the value of the pin
  int a = digitalRead(button);

  // Display something if the button is pressed (do you have all the info you need?)
  digitalWrite(LED_BUILTIN, a);

  // Use delay to slow down the output (if you want)
  delay(500);
}
