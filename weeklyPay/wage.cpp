//created by Justin Johnson
// created on 2/15/17
// assignment 1: Calculate gross and net pay. 

#include <iostream>
#include <string>
using namespace std;

struct WeeklyPay {
    
    double hrsWorked = 0.0;
    double moneyEarned =0.0;
    string fullName = " ";
};


int main() {
    
   WeeklyPay wagePaid; {
   wagePaid.hrsWorked ;
   wagePaid.moneyEarned ;
   wagePaid.fullName ;
   }
   double grossEarnings ;
   double netEarning ;
   double earningTaxes;
   int healthIns = 130;         // health insurance 
    
    cout << "Please enter you first and Last name ";
   getline(cin, wagePaid.fullName );       // get name
   
    cout << " Thank you "<< wagePaid.fullName << " Now enter how many hours you have worked this week" << endl;
   cin >> wagePaid.hrsWorked ;            // get hours worked
   
   cout << " Now enter how much you are paid an hour. " << endl;
   cin >> wagePaid.moneyEarned;           // how much money they are paid 
   
   
   grossEarnings = wagePaid.moneyEarned * wagePaid.hrsWorked ; // weekly gross earnings
   cout << " Your gross weekly earnings are $" << grossEarnings << endl;
   
    earningTaxes = ((grossEarnings -healthIns) * .17); 
    netEarning = (grossEarnings - healthIns) - earningTaxes ; // net earnings
    
    cout << " Then your health insurance cost is $130 and then there is a 17% tax." << endl;
    
    cout << " After health insurance and taxes your net weekly earnings are $" << netEarning << endl;
    cout << " Pay Slip" << endl;
    
    cout << " 1) Name; "<< wagePaid.fullName << ", 2) Hours; " << wagePaid.hrsWorked << ", 3) Money paid an hour $" << wagePaid.moneyEarned;
    cout << ", 4) Gross pay $" << grossEarnings << endl;
    cout << " 5) Net pay (after taxes) $" << netEarning;
    
    
    
    return 0;
    
}
    
    