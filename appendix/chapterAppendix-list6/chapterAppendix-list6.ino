#define A 7
#define B 6
#define C 4
#define D 2
#define E 1
#define F 9
#define G 10

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
}

void loop() { 
  digitalWrite(A, LOW); 
  digitalWrite(B, HIGH); 
  digitalWrite(C, HIGH); 
  digitalWrite(D, LOW); 
  digitalWrite(E, LOW); 
  digitalWrite(F, LOW); 
  digitalWrite(G, LOW);

  delay(1000);

  digitalWrite(A, HIGH); 
  digitalWrite(B, HIGH); 
  digitalWrite(C, LOW); 
  digitalWrite(D, HIGH); 
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  
  delay(1000);
}