
const int TEMP_PIN = 34;
const int VIBRATION_PIN = 35;
const int GREEN_LED = 26;
const int YELLOW_LED = 27;
const int RED_LED = 14;
const int BUZZER_PIN = 25;

void setup() {
  Serial.begin(115200);

  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  Serial.println("Predictive Maintenance System");
  Serial.println("Motor Monitoring Started");
}

void loop() {
  int tempRaw = analogRead(TEMP_PIN);
  int vibrationRaw = analogRead(VIBRATION_PIN);

  int temperature = map(tempRaw, 0, 4095, 20, 100);
  int vibration = map(vibrationRaw, 0, 4095, 0, 100);

  String status;

  if (temperature >= 80 || vibration >= 80) {
    status = "CRITICAL";
  } 
  else if (temperature >= 60 || vibration >= 60) {
    status = "WARNING";
  } 
  else {
    status = "NORMAL";
  }

  digitalWrite(GREEN_LED, status == "NORMAL");
  digitalWrite(YELLOW_LED, status == "WARNING");
  digitalWrite(RED_LED, status == "CRITICAL");

  if (status == "CRITICAL") {
    tone(BUZZER_PIN, 2000);
  } else {
    noTone(BUZZER_PIN);
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" C | Vibration: ");
  Serial.print(vibration);
  Serial.print("% | Status: ");
  Serial.println(status);

  delay(1000);
}
