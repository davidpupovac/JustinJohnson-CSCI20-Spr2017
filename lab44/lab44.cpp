// created by justin johnson
// created on 4/20/17
// takes names through arrays and loops will output a chose for user namesa at the end

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;




int main(){
    
    // last name and first name
    const int length1 = 11;
    const int length2 = 21;
    char firstName[length1] ;
    char lastName[length2] ;

     cout << "enter your first name (10 or less charecters)" << endl;
     cin.getline(firstName,length1);
     cout << "your first name is " << firstName << endl; cout << endl;
     cout << "enter you last name now" << endl;
     cin.getline(lastName,length2);
     
     
 // if first and last name are same will make them reenter names
if(strcmp(firstName,lastName) ==0){
    do{
        cout << "Wrong restart and put names in correctly" << endl ;
        cout << "enter your first name again" << endl;
        cin.getline(firstName,length1);
        cout << "enter your first name again" << endl;
        cin.getline(lastName,length2);
     }while( strcmp(firstName,lastName) ==0); 
     

 }

}
     
     


