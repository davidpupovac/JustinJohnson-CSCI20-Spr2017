// created by Justin Johnson
// created on 2/27/17
// will be swaping inputed numbers and generating a randome number from those numbers. lab 2.3

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void randomNumbers(int &upperLimit,int &lowerLimit, int &randNum) {   // will genrate random numbers
     
       srand(time(0));
      randNum = (rand() % (upperLimit - lowerLimit + 1)) + lowerLimit;    // gernrate random number between lower and upper limits
      cout << " your random number between " << lowerLimit <<  " and " << upperLimit << " is after being swaped is " << randNum;
     }  
void numSwap(int &lowerLimit, int &upperLimit){  // will swap the upper and lower limits 

    lowerLimit = lowerLimit + upperLimit;
    upperLimit = lowerLimit - upperLimit;
    lowerLimit = lowerLimit - upperLimit;  // how the numbers are swaped
    cout << " The lower limit after being swaped is " << lowerLimit << ". The upper Limit after being swaped is " << upperLimit << endl;
     }
     
 int pToKg(int randNum){
    cout << " Hello " << randNum;

}
     
int main(){
    
    int upperLimit , lowerLimit;
    
    int randNum = 0;   
    
    cout << " Pick a number for you lower limit" << endl;
    cin >> lowerLimit;
    cout << " Now enter a number for the upper limit" << endl;
    cin >> upperLimit;
    cout << " The limts you choose are " << lowerLimit << " and " << upperLimit << endl;
    
    numSwap(lowerLimit,upperLimit);   // run function for swaping limits
    
    randomNumbers(lowerLimit,upperLimit,randNum);  // function for generating a random numnber
     
  pToKg(randNum);
 
     return 0;
}
