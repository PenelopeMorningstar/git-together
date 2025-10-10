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
void menu(){

}

//Kylan
void add(){

}

//Danylo
void multiply(){

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
