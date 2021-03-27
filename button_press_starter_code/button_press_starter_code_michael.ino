
// Add pin initialization -- the button is connected to pin 20
pin = 20;

void setup() {
  
  // Setup serial monitor connection
  Serial.begin(9600);

  // Setup inputs/outputs
  pinMode(LED_BUILTIN, OUTPUT);

  pinMode(pin, INPUT);
  
}

void loop() {

  // Get the value of the pin
  if (digitalRead(pin) == HIGH) {
    
    digitalWrite(LED_BUILTIN, HIGH);

  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }


  // Display something if the button is pressed (do you have all the info you need?)
  

  // Use delay to slow down the output (if you want)
  delay(1000);
}
