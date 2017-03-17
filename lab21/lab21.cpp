// created by Justin Johnson
// created on 2/21/17
// this program will take two formulas for windchill and take the differnce between them

#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h> 
using namespace std;

int main (){
    
    double tempF = 0.0;   // fahrenheit 
    double windSpeed = 0.0; // will be velocity
    double oldstyle = 0.0;  //is going to  old windchill formula
    double newStyle = 0.0; // is going to be new windchill
    double diffOfStyles = 0.0; // diffence between the formulas
    double sqrtWind = 0.0;   // will be square root of velocity
    double powWind = 0.0;  // will be windspeed to a power
    
    
    cout << "Enter the temperature in fahrenheit."  << endl;
    cin >> tempF;
    cout <<  "Enter wind speed." << endl;
    cin >> windSpeed; 
    sqrtWind = sqrt(windSpeed);  // square root of velocity
    
    oldstyle = 0.081 * (3.71 * sqrtWind + 5.81 - 0.25 * windSpeed) * (tempF - 91.4) + 91.4; // old style formula
   cout << "The old style formula for wind chill produced " << endl;
    cout << oldstyle << endl;
    
    cout << " and the new style produced. " << endl;
    powWind = pow(windSpeed, 0.16);
    newStyle = 35.74 + 0.6215 * tempF - 35.75 *  powWind + 0.4275 * tempF * powWind; // new formula
    cout << newStyle << endl;
    
    diffOfStyles = abs(oldstyle - newStyle);  // takes the absoulte differnce from the two formulas
    
    cout << "The differnce between the styles is " << endl; 
    cout << diffOfStyles << endl;
    cout << " " << endl;
    
    cout << "windSpeed:    Old formula:     New formula:      differnce:" << endl;  // table
    cout << "   " << windSpeed <<"          " << oldstyle << "           " << newStyle << "            " << diffOfStyles << endl;   
     
    
    return 0;
}