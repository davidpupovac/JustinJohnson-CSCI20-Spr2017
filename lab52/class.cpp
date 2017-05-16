
#include "lab52.h"

MyClass::MyClass() : num_(0) {}

void MyClass::Output() {
  cout << "My number is: " << num_ << endl;
}

void MyClass::SetNumber(int num){
   num_ = num;
}

int MyClass::GetNumber(){
   return num_;
}


int randomNumber(){
   srand(time(0));
   return (rand()% 10) + 1);
}