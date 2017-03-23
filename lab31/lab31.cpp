// created by justin johnson
// created on 3/23/2017
//

#include <iostream>
#include <string>
using namespace std;

class phonePlan {  // class
    public:
    void typeOfDevice(string dumb, string smart, string tablet);
    void monthlyPlan(int cheapPrice, int unlimitedprice);
    void dataCharge(int dataPlan );
    void corporateDiscount(double corpDis);
    void familyDiscount(int famDiscount);
    
    phonePlan();  // default constructor
    phonePlan(string dumb, string smart, string tablet);
    
    private: 
    PriceofPlan_;
    
};
phonePlan::phonePlan();{
    PriceofPlan_ = 0.0;
    
}
phonePlan::phonePlan(string dumb , string smart , string tablet );{
    PriceofPlan_ ;
}
phonePlan::SettypeOfDevice(string dumb, string smart, string table);
phonePlan::SetmonthlyPlan(int cheapPrice, int unlimitedprice);
phonePlan::SetdataCharge(int dataPlan );
phonePlan::SetcorporateDiscount(double corpDis);
phonePlan::SetfamilyDiscount(int famDiscount);

int main(){
    
    
    
    
    return 0;
}