void setup() {
  // Start the serial connection at 9600 baud
  Serial.begin(9600);
}

void loop() {
  // Send a message to the computer
  Serial.println("Hello from Arduino Nano!");
  
  // Wait for 1 second before sending the next message
  delay(1000);
}
