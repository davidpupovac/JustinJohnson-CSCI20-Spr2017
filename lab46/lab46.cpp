#include <iostream>
#include <string>
#include <fstream>
using namespace std;



int main(){
    
    int units = 12;
    int A  = 4;
    int b = 3;
    string FileName;
    int currentGPA ;
    
    cout << "enter file name: (suzycue)" << endl;
    cin >>  FileName;
    
    ofstream GPAFile("FileName.txt");
    
    GPAFile.open("FileName");
    if(GPAFile.is_open()){
        cout << "file is open" << endl;
}
    
    
    return 0;
}

