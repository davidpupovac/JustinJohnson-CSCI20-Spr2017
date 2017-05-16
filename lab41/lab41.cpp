// created by Justin Johnson
// created on 3/30/17
// using a class 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class ArrayTools{
    
    public:
        ArrayTools(); // constructors
        ArrayTools(int array[]);
        
        int GetPrint();
        int GetFind_min();
        int GetFind_max();
        int GetFind_sum();
        int GetSerch();
        int GetIs_sorted();
        
    private:
         int array_[10];  // size is 10
};

 ArrayTools::ArrayTools(int array[]){
     for( int i =0; i < 10; i++){
     array_[i] = array[i];
 }
}
// print function
int ArrayTools::GetPrint(){
    cout << "Array Values: ";
    for(int i = 0; i < 10; i++) { 
    cout << array_[i] ;     
}}

int ArrayTools:: GetFind_min(int valMin){
    valMin = array_[0];
    for(int i = 0; i < 4; i++){
        if(array_[i] <= valMin){
            valMin = array_[i];
        }
    }
    return valMin;
}
int ArrayTools::GetFind_max(int valMax){
    for(int j = 5; i < 10; j++ ){
    if(array_[j] >= valMax){
        valMax = array_[j];
    }
    }
    return valMax;
}
int ArrayTools::GetFind_sum(int sum = 0){
    for(int f = 0; f <20; i++){
        sum = sum + array_[i];
    }
    return sum;
}
int ArrayTools::GetSerch(){
    
}
int ArrayTools::GetIs_sorted(){
    
}

int main(){
    
    
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin >> myArray[i];
    }
    
    ArrayTools a(myArray);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;

    return 0;
}