// created by Justin Johnson
// created on 2/27/17


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void randomNumbers(int &upperLimit,int &lowerLimit, int &randNum) { 
     
       srand(time(0));
      randNum = lowerLimit + rand() % upperLimit; 
      cout << " your random number between " << lowerLimit <<  " and " << upperLimit << " is after being swaped is " << randNum;
     }
void numSwap(int &lowerLimit, int &upperLimit){

    lowerLimit = lowerLimit + upperLimit;
    upperLimit = lowerLimit - upperLimit;
    lowerLimit = lowerLimit - upperLimit;
    cout << " The lower limit after being swaped is " << lowerLimit << ". The upper Limit after being swaped is " << upperLimit << endl;
     }
     
int main(){
    
    int upperLimit , lowerLimit;
    
    int randNum = 0;
    
    cout << " Pick a number for you lower limit" << endl;
    cin >> lowerLimit;
    cout << " Now enter a number for the upper limit" << endl;
    cin >> upperLimit;
    cout << " The limts you choose are " << lowerLimit << " and " << upperLimit << endl;
    
    numSwap(lowerLimit,upperLimit);
    
    randomNumbers(lowerLimit,upperLimit,randNum);
     
     return 0;
}



    
    


    
    
    