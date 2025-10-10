#include <Arduino.h>

//function declarations
void blink();
void menu();
void add();
void multiply();
void modulo();

//default
void setup() {
serial(9600);
}

void loop() {
  
}

//Aisha
void blink(){

}

//Aleksandr
void menu(){

}

//Kylan
void add(){

}

//Danylo
void multiply(){

    int num1, num2;

    Serial.println("Enter first number:");
    while (Serial.available() == 0) {}
    num1 = Serial.parseInt();

    Serial.println("Enter second number: ");
    while (Serial.available() == 0) {}
    num2 = Serial.parseInt();

    Serial.println("The product is: ");
    Serial.print(num1 * num2);
    Serial.println();

}

//Penelope
void modulo(){

}