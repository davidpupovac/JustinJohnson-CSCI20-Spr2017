// created by justin johnson
// created on 4/25/17
// takes names through strings and loops will output a chose for user namesames at the end

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    
    const int size1 = 11;
    const int size2 = 21;
    string firstName ; // first name
    string lastName ;  // lastname
    int username; // will allow choice for username

     cout << "Enter your first name (10 or less characters)" << endl;
       getline(cin, firstName);  // input for first name

     cout << "Enter you last name now (20 or less characters)" << endl;
       getline(cin, lastName);
       
     if((firstName.length() > size1 || lastName.length() > size2)){
        do {             
            cout << "one of the names is more than allowed" << endl;
            cout << "enter first name again." << endl;
            getline(cin, firstName);  // input for first name
            cout << "enter last name again." << endl;
            getline(cin, lastName); // input for last name
            
        } while(firstName.length() > size1 || lastName.length() > size2);
     } // closes if statement 
///////////////////////////////////////////////////////////////////////////////////
     
     // if first and last name are same will make them re-enter names
if(firstName == lastName){
    do{
        cout << "Wrong.. Names enterd in are the same" << endl ;
        cout << "Enter your first name again" << endl;
         getline(cin, firstName);  // input for first name
        cout << "Enter your last name  again" << endl;
        getline(cin, lastName);  // input for first name
     }while(firstName == lastName); 
 } // closes if statement
 
 cout << "Your name is " << firstName << " " << lastName << endl;  // outputs full name
    
    // choices for usernames
     cout << endl << "Which usernames would you like? Choose the number by name:" << endl << "1: ";
 cout << "Your name is " << firstName << " " << lastName << endl;  // outputs full name
    
    // choices for usernames
     cout << endl << "Which usernames would you like? Choose the number by name:" << endl;
    
    cout << "1) " << firstName.at(0) << firstName.at(1) << lastName << endl;
    cout << "2) " << firstName << lastName << endl;
    cout << "3) " << firstName.at(0) << lastName << endl;
    

    // allows choice for username
    cout << "Choose username by number next to them number now." << endl;
    cin >> username;
    cout << endl;
    
    // let them to chose username
switch(username){
    // reuse loops to output username chosen
    case 1: 
        cout << "your user name is: " ;
        cout << firstName.at(0) << firstName.at(1) << lastName << endl;
        break;
        
    case 2:
        cout << "your user name is: " ;
        cout  << firstName << lastName << endl;
    break;
        
    case 3:
        cout << "your user name is: " ;
        cout << firstName.at(0) << lastName << endl;
    break;
         
    // if wrong number chosen the make them restart    
    default:
        cout << "Restart and choose correctly.";
}
}