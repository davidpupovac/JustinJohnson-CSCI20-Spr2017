//created by Justin Johnson
// created on 2/2/17

#include <iostream>
using namespace std;


int main()
{
    int currentPop = 324472000;
    int popRiseyear = 4*60*24*365 ;
    int x = 0;
    
    
    
    cout << "the current population is " << currentPop << endl;
    cout << "select number for years into the future to see population rise. ";
    cin >> x;
    
      int futurePop= currentPop + popRiseyear * x;
    
    cout << "The population for the number of years you selected is " << futurePop << endl;
    
    
}