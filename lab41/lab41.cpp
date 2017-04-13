// created by Justin Johnson
// created on 3/30/17
// using a class 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class ArrayTools{
    
    public:
        ArrayTools();
        
        void SetPrint();
        void SetFind_min();
        void SetFind_max();
        void SetFind_sum();
        void SetSerch();
        void SetIs_sorted();
        
        int GetPrint();
        int GetFind_min();
        int GetFind_max();
        int GetFind_sum();
        int GetSerch();
        int GetIs_sorted();
        
    private:
         int single_ = [10];
};

 ArrayTools::ArrayTools(){
     
    return;
}
void ArrayTools::SetPrint(){
    
}
void ArrayTools::SetFind_min(){
    
}
void ArrayTools::SetFind_max(){
    
}
void ArrayTools::SetFind_sum(){
    
}
void ArrayTools::SetSerch(){
    
}
void ArrayTools::SetIs_sorted(){
    
}
int ArrayTools::GetPrint(){
    
}
int ArrayTools:: GetFind_min(){
    
}
int ArrayTools::GetFind_max(){
    
}
int ArrayTools::GetFind_sum(){
    
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