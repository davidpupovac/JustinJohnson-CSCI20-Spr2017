// created by justin johnson
// created on 3/2/17
// create a random number genrator and convert lbs to kg and vice versa

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int randomNumbers(int &upperLimit,int &lowerLimit, int &randNum);  // function for random numbers 
int numSwap(int &lowerLimit, int &upperLimit);// function to swap numbers
double poundsToKiloGrams(double randNum);  // function to covert pounds to kilograms
double kiloGramToPounds(double kiloGrams,double randNum); //  function to change kg back to pounds
double kiloGrams = .45392;  // change later

int main(){
    
    int upperLimit , lowerLimit;
    int randNum = 0;   
   
    
    cout << " Pick a lower limit number for pounds" << endl;
    cin >> lowerLimit;
    cout << " Now enter  upper limit number for pounds" << endl;
    cin >> upperLimit;
    cout << " The limts you chose were " << lowerLimit << " and " << upperLimit << endl;
    
    
    numSwap(lowerLimit,upperLimit);   // run function for swaping limits
    cout << " The lower limit after being swaped is " << lowerLimit << ". The upper Limit after being swaped is " << upperLimit << endl;
    
    randomNumbers(lowerLimit,upperLimit,randNum);  // function for generating a random numnber
    cout << " your random number between " << lowerLimit <<  " and " << upperLimit << "  after being swaped is " << randNum << " lbs" << endl;
    
    poundsToKiloGrams( randNum); // gives you kilograms
    cout << " From " << randNum << " pounds " <<  "you have " << kiloGrams << " kiloGrams" << endl;
    
   kiloGramToPounds(kiloGrams,randNum);
 
     return 0;
}

int randomNumbers(int &upperLimit,int &lowerLimit, int &randNum) {   // will genrate random numbers
     
       srand(time(0));
      randNum = (rand() % (upperLimit - lowerLimit + 1)) + lowerLimit;    // gernrate random number between lower and upper limits
      
      return randNum;
     }  
     
int numSwap(int &lowerLimit, int &upperLimit){  // will swap the upper and lower limits 

    lowerLimit = lowerLimit + upperLimit;
    upperLimit = lowerLimit - upperLimit;
    lowerLimit = lowerLimit - upperLimit;  // how the numbers are swaped
    
     }
     
double poundsToKiloGrams(double randNum ){   // will give kiloGrams from pounds.

    kiloGrams = randNum * kiloGrams;   // takes the pounds and convertes it to kilo grams
return kiloGrams;
}

double kiloGramToPounds(double kiloGrams, double randNum){  // will take kg and convert back to pounds
  double pounds =  kiloGrams * 2.20462;
  cout << " From " << kiloGrams << " back to pounds we have " << pounds << "." << endl; 
   return pounds;
    
}