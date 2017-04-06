// created by justin johnson
// created on 4/6/17
// 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


class computerGame{
    public:
        computerGame();  // default constructors
        computerGame(int scissors, int rock, int paper, int lizard, int spock);
    
        void SetScissors();
        void SetRock();
        void SetPaper();
        void SetLizard();
        void SetSpock();
        
        int GetScissors();
        int GetRock();
        int GetPaper();
        int GetLizard();
        int GetSpock();
    
    private:
         int scissors_ ;
         int rock_ ;
         int paper_ ;
         int lizard_ ;
         int spock_ ;
};


int main(){
    int userChoice; 
    srand(time(0));
    int computerChoice = rand() % 5 +1;  // computers choice
    int gamesPLayed =0;
     
    cout << "Lets play Rock, Paper, Scissors, Lizard, Spock. " << endl;
    cout << "Chose how many rounds between 3, 5, and 7" << endl;
    cin >> gamesPLayed; cout << endl;
    cout << "Chose between 1 for Rock, 2 for Paper, 3 for Scissors, 4 for Lizard or 5 for Spock " << endl;
    cin >> userChoice; cout << endl;
     
for(int i=0; i < gamesPLayed; i++){
    
 switch(userChoice){
    case 1:
        cout << "You chose Rock!"<< endl;
        break;
    case 2:
        cout << "You chose Paper!"<< endl;
        break;
    case 3:
        cout << "You chose Scissors!"<< endl;
        break;
    case 4:
        cout << "You chose Lizard!"<< endl;
        break;
    case 5:
        cout << "You chose Spock!"<< endl;
        break;
    defalut: 
        cout << "Restart and chose a correctly" << endl;
        return 0;
  }
 switch(computerChoice){
         case 1:
        cout << "Computer chose Rock!" << endl ;
        break;
    case 2:
        cout << "Computer chose Paper!"<< endl;
        break;
    case 3:
        cout << "Computer chose Scissors!" << endl;
        break;
    case 4:
        cout << "Computer chose Lizard!"<< endl;
        break;
    case 5:
        cout << "Computer chose Spock!"<< endl;
        break;
 }
 if(userChoice == computerChoice){
     cout << "Draw!" << endl;
 }
 
    cout << "Round " << i+1 << " is over choose again" << endl; cout << endl;
    cin >> userChoice;
    computerChoice = rand() % 5 +1; // ccomputer choses again
 
} // closes loop
  
    
    return 0;
}

