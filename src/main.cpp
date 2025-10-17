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
    // git status -- for status 
    // git add . -- to add all changes or files 
    // git commit -m "name of changes" -- to commit changes and in "" use name to name it
    // git push -u origin NAME_OF_BRANCH -- to push your commits
for (int i = 0; i < 5; i++) {
    digitalWrite(13, HIGH);  // turn LED on
    delay(500);              // wait 500 milliseconds
    digitalWrite(13, LOW);   // turn LED off
    delay(500);  
}
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

}