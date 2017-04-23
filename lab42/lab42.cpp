// created by Justin Johnson
// created on 4/13/17
// using a class and parrel arrays will keep trak of peoples price and show them how much they owe for items selected

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
    
    int itemNumber; // for item choice 
    int totalCost = 0; // price at the end of seclecrtions
    int totalItems = 0; // displays number of items 
    string item[10] = {"popcorn","pencils","paper","coffee","shoes", "shirt","glasses","oil","hat","juice"};
    int itemPrice[10] = {3,3,3,3,60,60,60,10,10,10};
    int itemInventory[10] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    
    
    // outputs items
    cout << "Invortory items are as follows" << endl;
    cout << "1) item: " << item[0] << ", Price: $" << itemPrice[0] << endl;
    cout << "2) item: " << item[1] << ", Price: $" << itemPrice[1] << endl;
    cout << "3) item: " << item[2] << ", Price: $" << itemPrice[2] << endl;
    cout << "4) item: " << item[3] << ", Price: $" << itemPrice[3] << endl;
    cout << "5) item: " << item[4] << ", Price: $" << itemPrice[4] << endl;
    cout << "6) item: " << item[5] << ", Price: $" << itemPrice[5] << endl;
    cout << "7) item: " << item[6] << ", Price: $" << itemPrice[6] << endl;
    cout << "8) item: " << item[7] << ", Price: $" << itemPrice[7] << endl;
    cout << "9) item: " << item[8] << ", Price: $" << itemPrice[8] << endl;
    cout << "10) item: " << item[9] << ", Price: $" << itemPrice[9] << endl;
    
    cout << " we have 10 of each item in stock" << endl;
    cout << "Chose what items you would like by there number" << endl;
    cout << "Press -1 when done" << endl; 

    // let them make multi choices
while(itemNumber != -1){
    cin >> itemNumber;
    
    if (itemNumber > 10) {
    do{
        cout << "Wrong number. Re-chose what you want. ";
        cin >> itemNumber;
    } while(itemNumber > 10) ;
}
    switch(itemNumber){
        case 1: 
            
            itemInventory[0] = itemInventory[0] - 1;
            cout <<"Popcorn Invortory:" << itemInventory[0] << endl;
            totalCost += 3;
                break;
        case 2:
            
            itemInventory[1] = itemInventory[1]-1;
            cout << "pencils Invortory:" << itemInventory[1] << endl;
            totalCost += 3;
                break;
        case 3: 
            
            itemInventory[2] = itemInventory[2] - 1;
            cout <<"paper Invortory:" << itemInventory[2] << endl;
            totalCost += 3;
                break;
        case 4: 
           
            itemInventory[3] = itemInventory[3] - 1;
            cout <<"coffee Invortory:" << itemInventory[3]<< endl;
            totalCost += 3;
                break;
        case 5: 
            
            itemInventory[4] = itemInventory[4] - 1;
            cout <<"shoes Invortory:" << itemInventory[4]<< endl;
            totalCost += 60;  
                break;
        case 6: 
           
            itemInventory[5] = itemInventory[5] - 1;
            cout <<"shirt Invortory:" << itemInventory[5]<< endl;
            totalCost += 60;
                break;
        case 7: 
            
            itemInventory[6] = itemInventory[6] - 1;
            cout <<"glasses Invortory:" << itemInventory[6]<< endl;
            totalCost += 60;
                break;
        case 8: 
            
            itemInventory[7] = itemInventory[7] - 1;
            cout <<"oil Invortory:" << itemInventory[7]<< endl;
            totalCost += 10;
                break;
        case 9: 
           
            itemInventory[8] = itemInventory[8] - 1;
            cout <<"hat Invortory:" << itemInventory[8]<< endl;
            totalCost += 10;
                break;
        case 10: 
        
            itemInventory[9] = itemInventory[9] - 1;
            cout <<"juice Invortory:" << itemInventory[9]<< endl;
            totalCost += 10;
                break;
    }
 /* if(itemInventory[itemNumber] == 1){
    do{
        cout << "Out of stock" << endl;
        cin >> itemNumber;
    }while(itemInventory[itemNumber] == 1);
     }  */
     
     totalItems +=1;
     
}
    cout << "Total Items selected: "<< totalItems << endl;
    cout << "Total cost $" << totalCost; 
    return 0;
}