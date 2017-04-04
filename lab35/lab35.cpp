

/* The techniques i used to debugg was read through the code and see what they were trying to do and also discuss with a groupmate what could be wrong. 
I think both worked very well as we were both able to identify what the was trying to do but was failing to do... 
it is important because you need to be able to ideitify what is wrong with the code to be able to fix and also understand the code

*/
#include <iostream>
using namespace std; 

int main(){
    
        // initialization
        int num;
        int sum=0;
        cout << "Enter numbers separated by spaces"  << " and terminated with a negative number." << endl;
         // read first number
        cin >> num;
         while (num >= 0)
  {
               // add in to the sum
               sum = sum + num;
                // read in next number (getting ready for next loop test)
               cin >> num;
        }
                cout << "Sum was " << sum << endl;
}