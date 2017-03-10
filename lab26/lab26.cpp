/* Created By: justin johnson
 * Created On: 3/9/2017
 * This program will run the Temperature Converter Class
 */
 
#include <iostream>
#include <string>
using namespace std;


class TemperatureConverter {
    public:
    double SetTempFromKelvin(double kelvinTemp);
    double SetTempFromCelsius(double celsiusTemp, double kelvinTocelsius);
    double SetTempFromFahrenheit(double fahrTemp);
    TemperatureConverter();  // default constructor
    TemperatureConverter(double kelvin);
    
    double GetTempFromKelvin();
    double GetTempAsCelsius(); 
    double GetTempAsFahrenheit();
    
    private:
    double kelvin_ = 0.0;
};
TemperatureConverter::TemperatureConverter(){
    kelvin_ = 0;
    return;
}
TemperatureConverter::TemperatureConverter(double kelvin){
    kelvin_ = kelvin;
    return;
    
}

double TemperatureConverter::SetTempFromKelvin(double kelvinTemp){
    kelvin_ = kelvinTemp;
}

double TemperatureConverter::SetTempFromCelsius(double celsiusTemp, double kelvinTocelsius){
    kelvin_ = celsiusTemp;
    kelvinTocelsius = 0.0;
    kelvinTocelsius = (celsiusTemp + 273.15); 
}

double TemperatureConverter::SetTempFromFahrenheit(double fahrTemp){
    kelvin_ = fahrTemp;
    double kelvinToFahrenheit = 0.0;
    kelvinToFahrenheit = (5*((fahrTemp-32) / (9)) +273.15);
}

double TemperatureConverter::GetTempAsCelsius(){
    return kelvinTocelsius - 273.15;
}
double TemperatureConverter::GetTempAsFahrenheit(){
    return((kelvinTocelsius*9) / 5+ 32);
}
void TemperatureConverter::PrintTemperatures(){
    
    
}


int main(){
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}