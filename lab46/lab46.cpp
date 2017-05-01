#include <iostream>
#include <string>
#include <fstream>
using namespace std;



int main(){
    int number = 4;
    int semester = 3;
    
    string name;
    int units [number];
    
    double grades[number];
    char gradeLetter[4];
    // calculate semester gp
    double totalPoints;
    double totalUnits;
    // semster gpa
    int semesterGpa;
    
    // 
    ifstream suzycue;
    ofstream gpaFile;
    
    // open files
     suzycue.open("input.text");
     gpaFile.open("output.html");
    
    // makes sure files are open
    if(gpaFile.is_open() && suzycue.is_open()){
        cout << "files are open" << endl;
} // closes if statement

    // get name
    getline(suzycue,name);
    
    // get semester
    suzycue >> semester;
    

    for (int i = 0; i < number; i++) {

        totalPoints = (units[i] * grades[i]);
        totalUnits = units[i]; 
}

    semesterGpa = totalPoints / totalUnits;

    
    // outputs students info
    gpaFile << "<!DOCTYPE html>" << endl;
    gpaFile << "<html>" << endl;
    gpaFile << "<head>" << endl;
    gpaFile << "<title>gpa info</title>" << endl;
    gpaFile << "</head>" << endl;
    gpaFile << "<body>" << endl;
    gpaFile << "<h1>gpa info</h1>" << endl;
    gpaFile << "<p>" << endl;
    gpaFile << "Name: " << name << endl;
    gpaFile << "Semester: " << semester << endl;
    gpaFile << "Semester GPA: " << semesterGpa << endl;
    gpaFile << "</p>" << endl;
    gpaFile << "</body>" << endl;
    gpaFile << "</html>" << endl;   
    
    // closes files
    suzycue.close();
    gpaFile.close();
    
    
    return 0;
}

