// created by Justin Johnson
// created on 3/30/17
// 
// 10 gueesses 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

    
  


int main(){
    int userNum;
    int i = 0;
      srand(time(0));
    int randomNumber = rand() % 50 +1;
    
    cout << "Try to guess the random number within 10 tries. " << endl;
    cin >> userNum; cout << endl;
    

    for(i =0; i <= 10; i++){
while(randomNumber != userNum){
        
        if( randomNumber > userNum){
            cout << "TOO LOW...Guess again.. " << endl;
         }
        else if (randomNumber < userNum){
        cout << "TOO HIGH...Guess again. " << endl;
         }
         i = i +1; 
         cout << "you have guessed " << i << " time(s) " << endl;
         
         cin >> userNum;
         
         
    } //closes while loop
    } // closes for loop
    
    
    if( randomNumber = userNum){
        cout << "JUST RIGHT! " << endl;
    }
    
    
    

    return 0;
};