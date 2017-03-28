// created by justin johnson
// created on 3/28/2017
//

#include <iostream>
#include <string>
using namespace std;


int main(){
    
   string fillersName = " ";
   double grossIncome = 0.0;
   double taxWithHeld = 0.0;
   int  marriageStatus = 0;
   double taxCalc  = 0.0;
   double totalAdjusted = 0.0;
   int personalExempt = 3900;
   
   
    cout << " What is your name? " << endl;
    getline(cin, fillersName); cout << endl;
    cout << fillersName << " enter 1: if you are married or ender 2: if you are single. " << endl;
    cin >> marriageStatus; cout << endl;

 switch(marriageStatus){
    case 1:
         cout << "You indicated that you are married." << endl;
         cout << "Now enert your gross income" << endl;
         cin >> grossIncome;
         
if((grossIncome >= 0) && (grossIncome <=  17850)){
             personalExempt = grossIncome - personalExempt;
             taxCalc  = grossIncome * .1;
             totalAdjusted = grossIncome - taxCalc;
         }
else if((grossIncome >= 0) && (grossIncome <=  17850)){
             personalExempt = grossIncome - personalExempt;
             taxCalc  = grossIncome * .1;
             totalAdjusted = grossIncome - taxCalc;
             
         }
         
         
    
         break;
         
     case 2:
         cout << "You indicated that you are single." << endl;
         break;
         
      defalut: 
        cout << "Restart and chose a correctly" << endl;
        break;
  }


    
    
    return 0;
}