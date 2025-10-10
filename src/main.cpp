#include <Arduino.h>

//function declarations
void blink();
void menu();
void add();
void multiply();
void modulo();

//default
void setup() {

}

void loop() {
  
}

//Aisha
void blink(){

}

//Aleksandr
void menu()
{


void loop() {
  if (Serial.available()) {
    char choice = Serial.read();

    if (choice == '1') {
      Serial.println("Enter numbers separated by space, end with '=':");
      float sum = 0;
      sum(sum, true);
    } 
    else if (choice == '2') {
      Serial.println("Enter numbers separated by space, end with '=':");
      float product = 1;
      multiply(product, false);
    }
  }
}

}

//Kylan
void add(){

}

//Danylo
void multiply(){

}

//Penelope
void modulo(){

}