// Define the pin numbers for the components
const int BUZZ_PIN = 9;   // Pin number for the buzzer
const int PIR_PIN = 3;    // Pin number for the PIR sensor
const int LED_PIN = 5;    // Pin number for the LED

int pirState;  // Variable to hold the state of the PIR sensor

void setup() {
  // Set the pinMode for each pin
  pinMode(PIR_PIN, INPUT);    // PIR_PIN is set as an input for the sensor
  pinMode(BUZZ_PIN, OUTPUT);  // BUZZ_PIN is set as an output for the buzzer
  pinMode(LED_PIN, OUTPUT);   // LED_PIN is set as an output for the LED
}

void loop() {
  // Continuously check the state of the PIR sensor
  pirState = digitalRead(PIR_PIN);  // Read the state of the PIR sensor and store it

  if (pirState == HIGH) {
    // Motion detected: turn on LED and beep for 2 seconds
    digitalWrite(LED_PIN, HIGH);    // Turn on the LED
    digitalWrite(BUZZ_PIN, HIGH);   // Turn on the buzzer
    delay(2000);                     // Wait for 2 seconds
    digitalWrite(BUZZ_PIN, LOW);    // Turn off the buzzer after 2 seconds
  } else {
    // No motion: ensure LED and buzzer are off
    digitalWrite(LED_PIN, LOW);     // Turn off the LED
    digitalWrite(BUZZ_PIN, LOW);    // Turn off the buzzer
  }
}
