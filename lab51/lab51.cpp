#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0; // setting namelength to 0
    char * name = new char[]; // creates a ponter named name and gives *name that adress to the array... ERROR no value for array

    cout << "Please enter a 10 letter word or less" << endl;  // outputs 
    cin >> name; // takes a value from the user for name

    char * head  = name; // gives *head the adress of name
    char * tail = name; // gives *tail adress of name
    nameLength = strlen(*name); // 

    cout << "Your word is " << firststr << endl; // outputs your word is.. but an erroe firststr not declared

    if (nameLength<10) // condtinal for namelength less that 10
    {
         while (*head != '\0') // runs llop for conditon
         {
                cout << *head; // outputs head 
                head++; // adds one to head
         }
     }
     else // runs if the if is not true
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;  // outputs 
     }

     cout << endl; // gives a space for liine

     tail = &name[strlen(name) - 1]; // tail is the adress of name
 
     if (nameLength < 10) // condtional if namelength is less than 10
     {
          while (tail != name) // loops if tail is nnot name
          {
                 cout << *tail; // outputs 
                 tail--; // subtracts 1 from tail
          }
     }
     cout << endl;

     head = name; // name is assigned to head
     tail = &name[strlen(name) - 1];

     head++; // add 1 to head
     tail--; // sub 1 from tail

     if (*head == *tail) // continal if pointers are equal
     {
         cout << "It is an palindrome!" << endl; // outputs
     }
     else // runs if the if is not true
     {
         cout << "It is not an palindrome" << endl; // outputss
     }

     return 0; // returns zero is program run succesufuly 
}