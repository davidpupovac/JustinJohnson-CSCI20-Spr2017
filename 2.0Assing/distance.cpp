//created by justin johnson
// created on 3/21/2017
// assignment 2.0 uses classes and objectes to convert distances between miles, yards, feet, and inches

#include <iostream>
#include <string>
using namespace std;

class DistanceConversion  {
    
    public:
    void SetConversionToMiles(double miles);
    void SetConversionToYards(double yards);
    void SetConversionTofeet(double feet);
    void SetConversionToInches(double inches);

    double GetConversionToMiles();
    double GetConversionToYards();
    double GetConversionToFeet();
    double GetConversionToInches();
    
    void PrintDistance();
    
    DistanceConversion();
    DistanceConversion(double Miles);
    
    private:
    double miles_;
};
DistanceConversion::DistanceConversion(){
    miles_ = 0.0;
}
DistanceConversion::DistanceConversion(double miles){
    miles = miles_;
    return;
}
void DistanceConversion::SetConversionToMiles(double miles){
    miles_ = miles;
}
void DistanceConversion::SetConversionToYards(double yards){
    miles_ = (yards *0.000568182);
}
void DistanceConversion::SetConversionTofeet(double feet){
    miles_ = feet * 0.00018939;
}
void DistanceConversion::SetConversionToInches(double inches){
    miles_ = inches * 0.000015783;
}
double DistanceConversion::GetConversionToMiles(){
    return miles_;
}
double DistanceConversion::GetConversionToYards() {
    return miles_;
}
double DistanceConversion::GetConversionToFeet(){
    return miles_;
}
double DistanceConversion::GetConversionToInches(){
    return miles_;
}
void DistanceConversion::PrintDistance() {
    cout <<"Miles: "  << GetConversionToMiles()   <<endl;
    cout <<"Yards: "  << GetConversionToYards()   <<endl;
    cout <<"Feet: "   << GetConversionToFeet()    <<endl;
    cout <<"Inches: " << GetConversionToInches()  <<endl;
}

int main(){
    double miles = 0.0 ;
    double yards = 0.0;
    double feet = 0.0;
    double inches = 0.0;
    
    DistanceConversion distanceMiles;
    
    cout<< "Enter the  distance in miles: ";
    cin >> miles;
     distanceMiles.SetConversionToMiles(miles);
     distanceMiles.PrintDistance();
    cout << endl;
    
    DistanceConversion distanceYards;
    cout << "Now enter the distance for yards: " ;
    cin >> yards;
    distanceYards.SetConversionToYards(yards);
    distanceYards.PrintDistance(); 
    cout << endl;
    
    DistanceConversion distanceFeet;
    cout << "Now enter the distance for feet: " ;
    cin >> feet;
    distanceFeet.SetConversionTofeet(feet);
    distanceFeet.PrintDistance();
    cout << endl;
    
    DistanceConversion distanceInches;
    cout << "Now enter the distance for inches: " ;
    cin >> inches;
    distanceInches.SetConversionToInches(inches);
    distanceInches.PrintDistance();
    cout << endl;
    
 return 0;
}