int partSeg[] = {2, 3, 4, 5, 6, 7, 9}; // a, b, c, d, e, f, g
int numSegs = 4;
// The pattern for each digit. 1 = segment ON, 0 = segment OFF.
byte number[10][7] = {
 {1, 1, 1, 1, 1, 1, 0}, // 0
 {0, 1, 1, 0, 0, 0, 0}, // 1
 {1, 1, 0, 1, 1, 0, 1}, // 2
 {1, 1, 1, 1, 0, 0, 1}, // 3
 {0, 1, 1, 0, 0, 1, 1}, // 4
 {1, 0, 1, 1, 0, 1, 1}, // 5s
 {1, 0, 1, 1, 1, 1, 1}, // 6
 {1, 1, 1, 0, 0, 0, 0}, // 7
 {1, 1, 1, 1, 1, 1, 1}, // 8
 {1, 1, 1, 1, 0, 1, 1}, // 9
};
int buzzer = 8;
// showDigit function
void displayDigit(int b){
 // For safety: do nothing if the input is outside 0-9.
 if (b < 0 || b > 9)
 return;
 // Loop through each of the 7 segments.
 for (int i = 0; i < numSegs; i++) {
 digitalWrite(partSeg[i], number[b][i]);
 }
}
void setup(){
 Serial.begin(9600);
 pinMode(buzzer, OUTPUT); // set up the buzzer
 for (int i = 0; i < numSegs; i++){
 pinMode(partSeg[i], OUTPUT); // set up each segment
 }

Serial.println('\n');
 Serial.println("=== Countdown Begins ===");
 int count = 9;
 while (count >=1) {
 Serial.print("Counting: ");
 Serial.println(count);
 displayDigit(count);
 tone(buzzer, 1000, 200); // short beep
delay(1000);
 count = count - 1;
 }
 displayDigit(0);
 tone(buzzer, 1500, 1000); // longer completion tone
 Serial.println("=== Countdown Complete ===");
}

void loop(){}