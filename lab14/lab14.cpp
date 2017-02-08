//created by Justin Johnson
// created on 2/2/17

#include <iostream>
using namespace std;

int main(){
    
    int dollar = 100; 
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    int userCents =0;
    double userFee = 10.9;
    
    
    cout << "For using this serives there is a fee of 10.9 percent." << endl;
    cout << " Enter how many cents you have" << endl;
    cin >> userCents;
    cout << " You put you have " << userCents << " cents" <<  endl;
    
   int amountBack = userCents - (userCents / userFee);
   int allQuarters = (userCents / 25);
   int allDimes =   (userCents % 25) / 10;
   int allNickels = ((userCents % 25) % 10) /5;
   int allPennies = (((userCents % 25) % 10) %5);
   
    
    cout <<"You have " << allQuarters<< " quarter(s)"  << endl;
    cout << "you have " << allDimes << " dime(s)"      << endl;
    cout << " you have " << allNickels << " nickel(s)" <<endl;
    cout << "you have " << allPennies <<  " pennie(s)" << endl;
    
    cout << "Had you a toal of $." << userCents << " with the fee of 10.9% you recive $." << amountBack << " back" << endl;
    cout << "Thank you for using this service please come again soon." << endl;
    
    
    return 0;
}