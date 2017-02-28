// created by Justin Johnson
// created on 2/21/17
// creating random numbers with srand(); within a function

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void randomNumbers() {  // generates random nuumbers
    
    srand(time(0));
    cout << "Your random number is ";
    cout << 1+ rand() % 100;
}


int main(){

randomNumbers();

    return 0;
};