int pins[4] = {2, 3, 4, 5};
int writeGraph(int x){
  int i;
  for ( i = pins[0]; i < x + pins[0]; i += 1) {
    digitalWrite(i, HIGH);
  }
}
void clearGraph() {
  int i;
  int end = sizeof(pins) / 2;
  for ( i = pins[0]; i < end; i += 1) {
    digitalWrite(i, LOW);
  }
}

void setup() {
  int i;
  int end = sizeof(pins) / 2;
  for ( i = pins[0]; i < end; i += 1) {
    pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
  writeGraph(5);
  
}

void loop() {
  writeGraph(1);
  delay(100);
  clearGraph();
  writeGraph(2);
  delay(100);
  clearGraph();
  writeGraph(3);
  delay(100);
  clearGraph();
  writeGraph(4);
  delay(100);
  clearGraph();
  writeGraph(5);
  delay(100);
  clearGraph();
  delay(100);
  clearGraph();
  
}




