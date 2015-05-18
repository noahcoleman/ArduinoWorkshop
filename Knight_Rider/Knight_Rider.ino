/* Knight Rider 2
 * --------------
 *
 * Reducing the amount of code using for(;;).
 *
 *
 * (cleft) 2005 K3, Malmo University
 * @author: David Cuartielles
 * @hardware: David Cuartielles, Aaron Hallborg
 */

int pinArray[] = {A5, A4, A3, A2, A1, A0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
int count = 0;
int timer = 100;

void setup(){
  // we make all the declarations at once
  for (count=0;count<18;count++) {
    pinMode(pinArray[count], OUTPUT);
  }
}

void loop() {
  //timer=random(50,200);
  for (count=0;count<18;count++) {
   digitalWrite(pinArray[count], HIGH);
   delay(timer);
   digitalWrite(pinArray[count], LOW);
   delay(timer);
  }
  for (count=17;count>=0;count--) {
   digitalWrite(pinArray[count], HIGH);
   delay(timer);
   digitalWrite(pinArray[count], LOW);
   delay(timer);
  }
}

