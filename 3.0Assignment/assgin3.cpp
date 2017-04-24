// created by justin johnson
// created on 4/6/17
// creating a game of Rock, Paper, Scissors, Lizard, Spock for the user against the computer useing loops switch case and class.
// took the "lose or win if statements" from cpluscplus fourm link as follows
// http://www.cplusplus.com/forum/beginner/124273/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


class computerGame{ // class name
    // public functions
    public:
        computerGame();  // default constructors
        computerGame(int userChoice);
        
        // will be set functions
        void SetRoundsForWin(int gamesPLayed); 
        void SetPlayerChoice(int userChoice);
        void SetComputerChoice(int computerChoice);
        
        // will be get functions
        int GetRoundsForWin();
        int GetPlayerChoice();
        int GetRoundsWon();
        int GetComputerChoice();
    
    private:
        // private variables
        int roundsForWin;
        // allow player to have choice2
        int playerChoice_;
        // will be players decions
        int playersDecisions;
};
// constuctors
computerGame::computerGame(){
    playerChoice_ = 1;  // defuat value
    return;
}
computerGame::computerGame( int userChoice){
    playerChoice_ = userChoice;
    return;
}

// creates choice for player
void computerGame::SetPlayerChoice(int userChoice){
    
    playerChoice_ = userChoice;  
  
 switch(playerChoice_){
    case 1:
        cout << "You chose Rock!"<< endl;
        playersDecisions =1;
        break;
    case 2:
        cout << "You chose Paper!"<< endl;
        break;
        playersDecisions =2;
    case 3:
        cout << "You chose Scissors!"<< endl;
        playersDecisions =3;
        break;
    case 4:
       cout << "You chose Lizard!"<< endl;
        playersDecisions = 4;
        break;
    case 5:
        cout << "You chose Spock!"<< endl;
        playersDecisions = 5;
        break;
 
}
}
// creates choice for computer
void computerGame::SetComputerChoice(int computerChoice){
    srand(time(0));  // random numbers
    computerChoice = rand() % 5 +1;  // computers choice
    
     switch(computerChoice){
         case 1:
        cout << "Computer chose Rock!" << endl ;
        playersDecisions = 1;
        break;
    case 2:
       cout << "Computer chose Paper!"<< endl;
        playersDecisions = 2;
        break;
    case 3:
        cout << "Computer chose Scissors!" << endl;
        playersDecisions =3;
        break;
    case 4:
       cout << "Computer chose Lizard!"<< endl;
        playersDecisions = 4;
        break;
    case 5:
       cout << "Computer chose Spock!"<< endl;
        playersDecisions = 5;
        break;
 }
    return;
}
// creates round choice for player
void computerGame::SetRoundsForWin(int gamesPLayed){
            switch (gamesPLayed) { 
                case 3:
                    roundsForWin = 3;
                    break;
                case 5:
                    roundsForWin = 5;
                    break;
                case 7:
                    roundsForWin = 7;
                    break;
                // to make them select correct option 
                default:
                    gamesPLayed = 0;
                    
            }
}

// get functions
int computerGame::GetComputerChoice(){
    return playersDecisions;
}
int computerGame::GetPlayerChoice(){
    return playersDecisions;
}
int computerGame::GetRoundsForWin(){
    return roundsForWin;
}



int main(){
  
   int userChoice= 0;
    int computerChoice;
    int gamesPLayed=0;
    int roundWon = 0;
    int roundScore = 0;
    int numDraw = 0;
    computerGame user;
    computerGame computer;  
    
    cout << "Lets play Rock, Paper, Scissors, Lizard, Spock. " << endl;
    cout << "Chose how many rounds between 3, 5, and 7" << endl;
    // let player pick rounds

    cin >> gamesPLayed; cout << endl;
    user.SetRoundsForWin(gamesPLayed);
    computer.SetRoundsForWin(gamesPLayed);
    
  //  cout << "Chose between 1 for Rock, 2 for Paper, 3 for Scissors, 4 for Lizard or 5 for Spock " << endl;

// make the user chose correct amount of rounds through nested conditions
if(gamesPLayed == 3 || gamesPLayed == 5 || gamesPLayed == 7){
cout << "Chose between 1 for Rock, 2 for Paper, 3 for Scissors, 4 for Lizard or 5 for Spock " << endl;
    
  for(int i = 0; i < gamesPLayed; i++){  // run loop for game
 
    cin >> userChoice;
    
  if( userChoice == 1 || userChoice == 2 || userChoice == 3 || userChoice == 4 || userChoice ==5){
    user.SetPlayerChoice(userChoice);
    computer.SetComputerChoice(computerChoice);
  

    // if they chose same option then its a draw
if(user.GetPlayerChoice() == computer.GetComputerChoice()){
     cout << "Draw!" << endl;   
}
 
 // if the user wins round it will run this
  if    (( user.GetPlayerChoice() == 3 && computer.GetComputerChoice() == 2 ) ||
             ( user.GetPlayerChoice() == 1 && computer.GetComputerChoice() == 2 ) ||
             ( user.GetPlayerChoice() == 1 && computer.GetComputerChoice() == 4 ) ||
             ( user.GetPlayerChoice() == 4 && computer.GetComputerChoice() == 5 ) ||
             ( user.GetPlayerChoice() == 5 && computer.GetComputerChoice() == 3 ) ||
             ( user.GetPlayerChoice() == 3 && computer.GetComputerChoice() == 4 ) ||
             ( user.GetPlayerChoice() == 4 && computer.GetComputerChoice() == 2 ) ||
             ( user.GetPlayerChoice() == 2 && computer.GetComputerChoice() == 5 ) ||
             ( user.GetPlayerChoice() == 5 && computer.GetComputerChoice() == 1 ) ||
             ( user.GetPlayerChoice() == 1 && computer.GetComputerChoice() == 3 )){
                 cout << "You have won round " << i +1 << endl; cout << endl;
                roundWon = roundWon +1;
  } // closes else if statment
  
  // if player loses round it will run this
   else if  (( user.GetPlayerChoice() == 2 && computer.GetComputerChoice() == 3 ) ||
             ( user.GetPlayerChoice() == 2 && computer.GetComputerChoice() == 1 ) ||
             ( user.GetPlayerChoice() == 4 && computer.GetComputerChoice() == 1 ) ||
             ( user.GetPlayerChoice() == 5 && computer.GetComputerChoice() == 4 ) ||
             ( user.GetPlayerChoice() == 3 && computer.GetComputerChoice() == 5 ) ||
             ( user.GetPlayerChoice() == 4 && computer.GetComputerChoice() == 3 ) ||
             ( user.GetPlayerChoice() == 2 && computer.GetComputerChoice() == 4 ) ||
             ( user.GetPlayerChoice() == 5 && computer.GetComputerChoice() == 2 ) ||
             ( user.GetPlayerChoice() == 1 && computer.GetComputerChoice() == 5 ) ||
             ( user.GetPlayerChoice() == 3 && computer.GetComputerChoice() == 1 )) {
        cout << "You lost round "<< i+1 << endl; cout << endl;
        roundScore = roundScore +1 ;
    } // closes else if statment
    else{
        numDraw = numDraw +1;
    }
   cout << "Enter anohter guess." << endl;
  } // stops the for loop with if statment if they chose wrong
  
  // will make them restart if the chose wrong for the [RPSLS] program
  else if( userChoice !=1 && userChoice != 2 && userChoice != 3 && userChoice != 4 != userChoice && 5){
   cout <<   "restart and choose correctly ;'(" << endl;
   return 0;
 } // close else if statment 
 
} // closes the  for loop 

} // closes the first if statment

// if the chose incorrectly for rounds it will stop and have them restart
else if( gamesPLayed != 3 && gamesPLayed != 5 ){
       cout << "restart and choose correctly ;'(" << endl;
       return 0;
}

// displays rounds won by user and computer
cout << "You won " << roundWon << " round(s)." << endl;
cout << "The Computer won "  << roundScore << " round(s)" << endl;
cout <<  numDraw << " Draw(s)!" << endl;
   
    // keeps round score for final outcome
    if (roundWon  > roundScore) {
        cout << " You Won the game! :D" << endl;
    }
    
    // keeps round score for final outcome
    else if (roundWon < roundScore) {
      
        cout << " You Lost the game! :P " << endl;
    }
    else if (roundWon ==  roundScore ){
    }
    
        
    

return 0;
}