//created by Justin Johnson
// created on 2/2/17

#include <iostream>
using namespace std;


int main()
{
    int currentPop = 324472000;
    int popRiseyear = 4*60*24*365 ;
    int years =0;
    
    
    
    cout << "the current population is " << currentPop << endl;
    cout << "select number for years into the future to see population rise. ";
    cin >> years;
    
      int futurePop= currentPop + popRiseyear * years;
    
    cout << "The population for the number of years you selected is " << futurePop << endl;
    cout << "will test the numbers 99, 26, 8, 13, and 46" << endl;
    
    
    
}