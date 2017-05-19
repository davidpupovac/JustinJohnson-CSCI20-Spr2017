//
//
//

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <sstream>
#include <stdlib.h>

using namespace std;
    
const int numWords = 100 ; 
     
class concordance {
    public:
        concordance(); // default constructor
        concordance(string words, int countWord, int wordLocation); // overloaded
        
        // set functions
        void SetFileWord(string words);
        void SetWordCount(int countWord);
        void SetLocation(int wordLocation);
        // get functions
        string GetFileWord();
        int GetWordCount();
        int GetLocation();
        void printFunction();

    
    private:
        // words
       string word_;
       // count word
       int wordCount_;
       // location of word
       int wordLocation_;
       
       
};
concordance::concordance(){ // default constructor
    word_ = " "; 
    wordCount_ = 0;
    wordLocation_ = 0;
}
concordance::concordance(string words , int countWord, int wordLocation){ // overloaded constructor
    word_ = words;
    wordCount_ = countWord;
    wordLocation_ = wordLocation;
    return;
}
void concordance::SetFileWord(string words){
   word_ = words;
}
string concordance::GetFileWord(){
   return word_;
}
void concordance::SetWordCount(int countWord){
    wordCount_ = countWord++ ;
   return;
 }
int concordance::GetWordCount(){
     return wordCount_;
 }
void concordance::SetLocation(int wordLocation){
     wordLocation_ = wordLocation;
 }
int concordance::GetLocation(){
    return wordLocation_;
}

// convert letter to lower case function
void convert(string& s){
    
    for(int j = 0; j < s.length(); j++){
        s[j] = tolower(s[j]);
}
}


int main(){

    
    string words; // be word
    int countWord = 0;
    int wordLocation = 0; // find where words was frist found
    string item[numWords]; // take in values from input file
    int text = 0; // 
    string stopWords ; // stop word from stop file
 
    
    // objects
    concordance word[numWords];  // object from class
    // file objects
    ifstream inFile; // input file
    ifstream stopFile; // stop file
    ofstream outFile; // output file
    
    string userFile; // enter file
    cout << "enter file you would like...(missMuffet.txt)" << endl;
    cin >> userFile ; cout << endl;
    
    // open files
    inFile.open(userFile);
    stopFile.open("englishhStopFfile.txt");
    outFile.open("output.txt");
    
     
    // if files dont open runs this
    if(inFile.fail() || stopFile.fail() || outFile.fail() ){
    
        cerr << "Error file(s) not opened" << endl;
        exit(1);
    }
    
    // read infile
while( inFile >> words){

        inFile >> item[text]; // takes the input from file
        convert(item[text]); // converts tp lower case 
        words = item[text];
    
        // remove commas and replaces w/spaces
    for (int f = 0; f < words.length(); f++) {
        
      if (words.at(f) == ',') {
         words.at(f) = ' ';
      }
    }
    
    // read stopFile
    while(!stopFile.eof()){
  
      stopFile >> stopWords;  // get stop file
      
      if (item[text] == stopWords){
          item[text] = "";  
          words = "";
      }
    }
    // close and reopen stop file
    stopFile.close();
    stopFile.open("englishhStopFfile.txt");
      
//     for(int j = 0; j < numWords; j++){
        
//         // word[j].SetFileWord(words);
        
//         if(word[j].GetFileWord() == words){
//             word[j].SetWordCount(countWord);
            
//         }
//         // cout << word[j].GetFileWord() << endl;
//         j  = numWords +1;
// }           

        // may be used to sort function
        //sort(item, item + numWords);
        
        //words = item[text];
        
        for(int j = 0; j < numWords; j++ ){

            word[j].SetFileWord(words);
            
            if(word[j].GetFileWord() != "" && word[j].GetFileWord() != "her" && word[j].GetFileWord() != "away" ){
                if(word[j +1].GetFileWord() == item[j]){
                    words = "";
               }
            cout << word[j].GetFileWord() << endl;
            outFile << word[j].GetFileWord() << endl;
            j = numWords + 1;
            }
    }
    
}
    


    inFile.close();
    stopFile.close();
    outFile.close();
    
    return 0;
}
