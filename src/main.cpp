#include <Arduino.h>

//function declarations
void blink();
void menu();
void add();
void multiply();
void modulo();

//default
void setup() {
Serial.begin(9600);
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
  int N1;
  int N2;

  printf("First number: \n");
  scanf("%d", &N1);
  printf("Second number: \n");
  scanf("%d", &N2);
  int answer = N1 + N2;

  printf("Answer: %i\n", answer);

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
