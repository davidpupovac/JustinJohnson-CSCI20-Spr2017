// created by Justin Johnson
// created on 3/30/17
// create a number guesseing game with 2 loops and random number genrator 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int userNum;
    int i = 0;
    srand(time(0));
    int randomNumber = rand() % 50 +1;
    
    cout << "Try to guess the random number between 1 and 50 within 10 tries. " << endl;
    cin >> userNum; cout << endl;
    


while(randomNumber != userNum){
    
     for(i =1; i <= 10; i++){
        if( randomNumber > userNum){
            cout << "TOO LOW...Guess again.. " << endl;  // indicates that guess is to low
         }
        else if (randomNumber < userNum){
        cout << "TOO HIGH...Guess again. " << endl; // indicates that guess is to high
        }
         
         cout << "you have guessed " << i << " time(s) " << endl;   // out puts number of guesses
         
         cin >> userNum; // lets user re enter another number
         
             if( randomNumber == userNum){    // lets user know if number guessed is correct
        cout << "JUST RIGHT! " << endl;
        
        
    }    
         
     } //closes for loop
    
} // closes while loop
    //while(randomNumber != userNum);
    
}