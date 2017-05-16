// created by justin johnson
// created on 4/20/17
// takes names through arrays and loops will output a chose for user namesames at the end

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

int main(){
    
    // last name and first name
    // one extra number for the nill character
    const int size1 = 11;
    const int size2 = 21;
    char firstName[size1] ; // first name
    char lastName[size2] ;  // lastname
    int username; // will allow choice for username

     cout << "Enter your first name (10 or less characters)" << endl;
     cin.getline(firstName,size1);  // input for first name

     cout << "Enter you last name now (20 or less characters)" << endl;
     cin.getline(lastName,size2); // input for last name
     
     // if names are more than char allowed then have them re-enter names
     if((strlen(firstName) > size1) || (strlen(lastName) > size2 )){
         //use loop to re-enter names
        do {             
            cout << "one of the names is more than allowed" << endl;
            cout << "enter first name again." << endl;
            cin.getline(firstName,size1);  // input for first name
            cout << "enter last name." << endl;
            cin.getline(lastName,size2); // input for last name
            
        } while((strlen(firstName) > size1) || (strlen(lastName) > size2) );
} // closes if statment 
     
 // if first and last name are same will make them re-enter names
if(strcmp(firstName,lastName) ==0){
    do{
        cout << "Wrong restart and put names in correctly" << endl ;
        cout << "Enter your first name again" << endl;
        cin.getline(firstName,size1);
        cout << "Enter your last name  again" << endl;
        cin.getline(lastName,size2);
     }while( strcmp(firstName,lastName) ==0); 
 } // closes if statement
 
 cout << "Your name is " << firstName << " " << lastName << endl;  // outputs full name
    
    // choices for usernames
     cout << endl << "Which usernames would you like? Choose the number by name:" << endl << "1: ";
for (int i = 0; i < 2; i++) { 
    cout << firstName[i];
   
}
    cout << lastName << endl << "2: ";
for (int i = 0; firstName[i] != '\0'; i++) { 
    cout << firstName[i];
    
 }
    cout << lastName << endl << "3: ";
for (int i = 0; i < 1; i++) { 
    cout << firstName[i];
    
}
    // outputs lastname for usernam
    cout << lastName << endl;
    // allows choice for username
    cout << "Choose number now." << endl;
    cin >> username;
    cout << endl;
    
    // let them to chose username
switch(username){
    // reuse loops to output username chosen
    case 1: 
            cout << "Your username is: "<< endl;  
    for (int i = 0; i < 2; i++) { 
            cout << firstName[i];
} // closes for loop
        cout << lastName;
    break;
        
    case 2:
        cout << "Your username is: " << endl; 
    for (int i = 0; firstName[i] != '\0'; i++) { 
        cout << firstName[i];
} // closes loop
        cout << lastName;
     break;
        
    case 3:
        cout << "Your username is: " << endl; 
        for (int i = 0; i < 1; i++) { 
            cout << firstName[i];
} // closes loop
        cout << lastName;
        break;
         
    // if wrong number chosen the make them restart    
    default:
        cout << "Restart and choose correctly.";
}

return 0;
} 
     
     


