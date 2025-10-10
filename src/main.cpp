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
void menu() {
  if (Serial.available()) {
    char choice = Serial.read();

    if (choice == '1') {
      Serial.println("Enter numbers separated by space, end with '=':");
      add(); 
    } 
    else if (choice == '2') {
      Serial.println("Enter numbers separated by space, end with '=':");
      multiply();  
    }
  }
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
    int num1 = 0;
    int num2 = 0;
    Serial.println("Please enter your first number");
    while(Serial.available()==0){}
    num1 = Serial.parseInt();
    Serial.println("Please enter your second number");
    while(Serial.available()==0){}
    while(num2 == 0){
        num2 = Serial.parseInt();
    }
    Serial.print("Module: ");
    Serial.print(num1%num2);
    Serial.println();
}
