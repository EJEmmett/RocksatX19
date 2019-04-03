const float resistance = 2000000;

// Converts float to string due to .write not accepting floats
char* float_to_string(float f, byte prec = 2){
  char* temp = (char *)malloc(sizeof(char));
  dtostrf(f, 4, prec, temp);
  return temp;
}

void setup(){
  Serial.begin(9600);
}

void loop(){
  // Voltage
  // analogRead returns values fom 0 (ground) to 1023 (5v)
  float voltage = analogRead(A0) * (5.0 / 1023.0);
  // Current
  float current = voltage / resistance;
  Serial.write(float_to_string(voltage));
  Serial.write(" ");
  Serial.write(float_to_string(current));
  Serial.write("\n");
}
