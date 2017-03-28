// created by justin johnson
// created on 3/23/2017
//   will create a prgram with if / else statments to chose a phone plan

#include <iostream>
#include <string>
using namespace std;
 
 
int main () {
    
    int deviceType = 0;
    int numSmartPhone =0;
    int numDumbphone = 0;
    int numTablet = 0;
    int  dumbPhone = 0;
    int  smartPhone = 0;
    int  tablet = 0; 
    int monthlyPlan = 0;
    int extraDevice = 0;
    int numextraDevice = 0;
    int planDiscount = 0;
    
    cout << " smartphone = $5 , dumbphone = $0, and tablet = $10" << endl; cout << endl;
    cout << " select what type of device would you like with the number. 1: smartphone 2:dumbphone 3:tablet " << endl;
    cin >> deviceType;

if( deviceType == 1 ){                                          // will run for device 1 smart phone
    cout << " How many smartphones would you like? ";
    cin >> numSmartPhone ; cout << endl;
    
    cout << " would you like to add another device?  1: for dumbPhone or 2: tablet or 3:for  no "; cout << endl;   // add one extra device
    cin >> extraDevice; cout << endl;
    
 if( extraDevice == 1){
     cout << " How many dumbPhones would you like?  "; cout <<endl;
     cin >> extraDevice;  cout << endl;
     numDumbphone = extraDevice;
}
else if( extraDevice == 2){
     cout << " How many tablets would you like?  "; cout <<endl;
     cin >> extraDevice;  cout << endl;
     numTablet = extraDevice;
}
     
else if( extraDevice == 3){
cout << " No extra devices" << endl;
}
}   // close device 1



if( deviceType == 2 ){                                          // will run for device 2 dumb phone
    cout << " How many dumb phones would you like? ";
    cin >> numSmartPhone ; cout << endl;
    
    cout << " would you like to add another device?  1: for smart phones or 2: tablet or 3:for  no "; cout << endl;  // add one extra device
    cin >> extraDevice; cout << endl;
    
 if( extraDevice == 1){
     cout << " How many smart phones would you like?  "; cout <<endl;
     cin >> extraDevice;  cout << endl;
     numSmartPhone = extraDevice;
}
else if( extraDevice == 2){
     cout << " How many tablets would you like?  "; cout <<endl;
     cin >> extraDevice;  cout << endl;
     numTablet = extraDevice;
}
     
else if( extraDevice == 3){
cout << " No extra devices" << endl;
}
else if( extraDevice == 'a'){
    cout << " How many extra device(s) would you like? ";
    cin >> numextraDevice; cout << endl;
}
else if( extraDevice == 'b'){
    cout << " How many of those device(s) would you like? "; 
    cin >> numextraDevice; cout << endl;
} // close extra device b
}   // close device 2



if( deviceType == 3 ){                                          // will run for device 3 tablet
    cout << " How many tablet(s) would you like? ";
    cin >> numTablet ; cout << endl;
    
    cout << " would you like to add another device?  1: for smart or 2: dumb phone or 3:for  no "; cout << endl;  // add one extra device
    cin >> extraDevice; cout << endl;
    
 if( extraDevice == 1){      
     cout << " How many smart phones would you like?  "; cout <<endl;
     cin >> extraDevice;  cout << endl;
     numSmartPhone = extraDevice;
}
else if( extraDevice == 2){
     cout << " How many dumb phones would you like?  "; cout <<endl;
     cin >> extraDevice;  cout << endl;
     numDumbphone = extraDevice;
}
} // close device 3

 cout << "what plan would you like Plan 1 is $30 a month for unlimited talk text.";
 cout << "Or Plan 2 is $70 a month for unlimited talk, text, plus 10gb of data. $1.50 for gb after ." ;
 cout << "Plane 1 or 2 ? "; cin >> monthlyPlan;
 
 if( monthlyPlan == 1){      // monthly plan
     cout << "you chose plan 1 which will be $30 a month" << endl;
 }
 
else if( monthlyPlan==2){
    cout << "you chose plan 2 which will be $70 a month" << endl;
 }
 cout << endl;
    cout << "would you like to apply for our discount 1: for family dicount or " << endl << "2: for corporate discount " << endl << "3:for no? "<<
    " chose 1 or 2 or 3. " << endl;
    cin >> planDiscount;
    
if( planDiscount == 1 ){
        cout <<  "Family dicountis added. $3 per phone line over 2.  " << endl;
}
else if(planDiscount ==2 ){
cout << "10% Corporate dicount is added" << endl;
}
else if( planDiscount ==3){
    cout << "no dicount" << endl;
}
cout << endl;



 
    cout << " Your complete phone plan " << endl;      // read out phone plan
 
    cout << numSmartPhone << " smart Phones" << endl ;
    cout << numDumbphone << " dumb Phones" << endl;
    cout << numTablet << " tablets" << endl;
    
if( monthlyPlan == 1){
     cout << "Your plan will be $30 a month" << endl;
 }
 
else if( monthlyPlan==2){
    cout << "Your plan will be $70 a month" << endl;
 }
    
    
if( planDiscount == 1 ){
        cout <<  "Discount of $3 per phone line over 2 added.  " << endl;
}
else if(planDiscount ==2 ){
cout << "10% Corporate dicount is added" << endl;
}
else if( planDiscount ==3){
    cout << "no dicount" << endl;
}

     
    return 0;
} // close main
