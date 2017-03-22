/* Created By: justin johnson
 * Created On: 3/9/2017
 * This program will convert temputres from kelvin, celcius and Fahrenheit using objects and classS
 */
 
#include <iostream>
#include <string>
using namespace std;


class TemperatureConverter {
    public:
    void SetTempFromKelvin(double kelvinTemp);
    void SetTempFromCelsius(double celsiusTemp);
    void SetTempFromFahrenheit(double fahrTemp);
    void PrintTemperatures();
    
    TemperatureConverter();  // default constructor
    TemperatureConverter(double kelvinTemp);
    
    double GetTempFromKelvin();
    double GetTempAsCelsius(); 
    double GetTempAsFahrenheit();
    
    private:
    double kelvin_;
};
TemperatureConverter::TemperatureConverter(){  // default constuctor 
    kelvin_ = 0.0;
}
TemperatureConverter::TemperatureConverter(double kelvinTemp){
    kelvin_ = kelvinTemp;
    return;
    
}

void TemperatureConverter::SetTempFromKelvin(double kelvinTemp){
    kelvin_ = kelvinTemp;
}

void TemperatureConverter::SetTempFromCelsius(double celsiusTemp){
    kelvin_ = (celsiusTemp + 273.15); 
}

void TemperatureConverter::SetTempFromFahrenheit(double fahrTemp){
   kelvin_ = (5 * (fahrTemp - 32) / 9) + 273.15;
}
double TemperatureConverter::GetTempFromKelvin() {
    return kelvin_;
}

double TemperatureConverter::GetTempAsCelsius(){
    return kelvin_;
}
double TemperatureConverter::GetTempAsFahrenheit(){
return kelvin_;
}
void TemperatureConverter::PrintTemperatures(){
  cout<<"Kelvin: "
     <<GetTempFromKelvin()
     <<endl
     <<"Celsius: "
 <<GetTempAsCelsius()
     <<endl
     <<"Fahrenheit: "
     <<GetTempAsFahrenheit()
     <<endl;
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