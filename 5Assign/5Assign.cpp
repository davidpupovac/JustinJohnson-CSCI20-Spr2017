// created by justin johnson
// created on may 18, 2017
// it is a guessing game that uses randum numbers to be put place in a 2d array that is 10x10 using a class and arrays


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>

using namespace std;

///////////////////////////////////////
// for 2d array
const int rows = 10;
const int columns = 10;
int board[rows][columns];
///////////////////////////////////////


class game{
    public:
    //consturctors
    game();
    game( int win, int lose, int x, int y, int board[rows][columns] );
    
    // set functions
   void SetClearBoard(int board[rows][columns]);
   void SetRandomSpawn(int x, int y);
   
   // get functions
   int GetClearBoard();
   int GetRandomSpawn();
   
    
    
    private:
    // store rows adn cols
    int newRows_;
    int newColumns_;
    int X; int Y;
    
    int newBoard_[rows][columns];
    int win_,lose_;
    
    
};
// constructors
game::game(){
    newRows_ = 0;
    newColumns_ = 0;
    newBoard_[rows][columns] ;
    win_ = 0;
    lose_ = 0;
    
}
// overloaded constructor
game::game(int lose, int win, int x, int y, int board[rows][columns]){
    newRows_ = rows;
    newColumns_ = columns;
    newBoard_[newRows_][newColumns_] = board[rows][columns];
    lose_ = lose;
    win_ = win;
    X = x;
    Y = y;
}
// clears board
void game::SetClearBoard(int board[rows][columns]){
    
    for(int i = 0; i < rows; i ++){
        for (int j = 0; j < columns; j++){
           newBoard_[i][j] =  board[i][j] = 0;
        }
    }
     return;
}
// outputs board
int game::GetClearBoard(){
    
    return newBoard_[newRows_][newColumns_];
}

// generates random nuumbers
void game::SetRandomSpawn(int x, int y) {
    int m = 0;
    srand(time(0));
    
 
    x = rand() % rows;
    y = rand() % columns;
    board[x][y] = 1;
    newBoard_[X][Y] = board[x][y];
    
 
    return;
}
int game::GetRandomSpawn(){
    return newBoard_[X][Y];
}

bool guess(int x, int y){
    if(board[y][x] == 1){
        board[y][x] = 2;
        return true;
    }
    else{
        return false;
    }
    
}

int main(){

    int userPick[rows][columns];
    int pickY, pickX;

    srand(time(0));
    // for random placment
    int x = rand() % rows;
    int y = rand() % columns;


    int board[rows][columns];
    
    ofstream outFile;
    outFile.open("output.txt");
    
    // object from class
    game game2[rows][columns];
    
    cout << "This is a guessing game " << endl;
    cout << "You need to guess where the computer has placed the 1 by putting in and x and y corrdiantes" << endl;
    cout << "You will Have 16 guesses" << endl;
    
        // creates the board and sets a random 1 in the program
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
 
            // clears board
            game2[i][j].SetClearBoard(board);
            
            // sets random number
            game2[x][y].SetRandomSpawn(x,y);
            game2[x][y].GetRandomSpawn();
           
            // gets board
            game2[i][j].GetClearBoard();
            // send to output fils
            outFile <<  game2[i][j].GetClearBoard() << " ";
        }
           outFile << endl;
    } 
    
    // for amount of guesses
    for(int k = 15; k > 0; k--){
    
    // allow pick for guess
    cout << "please pick a number between 0 - 9 for Y postion" << endl;
    cin >> pickY; 
    cout << "pick for X postion" << endl;
    cin >> pickX;

// if true will tell you you guessed right
if(guess(pickX,pickY) ){
    cout << "You Guessed correctly!" << endl;
    exit(0);
} // closes if statment

else{


    cout << " That is not the correct corrdinates!" << endl;
    cout << "You Have " << k << " guesses left " << endl;
    
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < columns; j++){
            // clears board
            game2[i][j].SetClearBoard(board);
            
            // sets random number
            game2[x][y].SetRandomSpawn(x,y);
            game2[x][y].GetRandomSpawn();
        }
    }
} // closes else statment

} // close first array to count guesses

    
    
return 0;
}
