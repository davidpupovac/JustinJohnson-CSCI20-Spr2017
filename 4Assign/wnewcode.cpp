#include <iostream>
#include <fstream> //Include fstream
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

const int NUM_WORDS = 26; //Cannot adjust array size based on input file

//Class word (using Array of Objects)
class Word {
    
    private:
        
        //the word
        string word_name;
        
        //number of times the word appears
        int num_appearances;
        
        //line where word is located
        int location_;
        
        //indicator if value has been output
        bool word_has_been_output;
        
        
    public:
        
        //function set word
        void SetWord(string word) {
            word_name = word;
            return;
        }
        
        //function output word
        string OutputWord() {
            return word_name;
        }
        
        //function add 1 to count
        void AddOneToCount() {
            num_appearances++;
            return;
        }
        
        //function output num
        int OutputCount() {
            return num_appearances;
        }
        
        //function set word location
        void SetWordLocation(int lineCount) {
            location_ = lineCount;
            return;
        }
        
        //function output location
        int OutputLocation() {
            return location_;
        }
        
        //function set bool to false
        void WordHasBeenOutput() {
            word_has_been_output = true;
        }
        
        //function get bool
        bool OutputBool() {
            return word_has_been_output;
        }
        
        //constructors
        Word() {
            word_name = "N/A";
            num_appearances = 0;
            location_ = 0;
            word_has_been_output = false;
        }
};

int main() {
    
    int i = 0; //Used as condition for various loops
    int j = 0; //Used to access each array of objects during input
    string line; //Used for object fin
    string inputWord; //Used for object lin
    string stopWord; //Used for object finstop
    int lineCount = 0; //Used to count which line each word is in
    
    //Create Objects
    ifstream fin; //object for file to be read
    ifstream finstop; //object for file contain stop words
    ofstream fout; //object for information to be output to text file
    stringstream lin; //object for line to be read
    Word word[NUM_WORDS]; //Array of objects to create an object for each word in the concordance
    
    //File Input with file to analyze
    char inputFile;
    while (inputFile != 'Y' && inputFile != 'N') {
        cout << "Input file? (Y or N): ";
        cin >> inputFile;
        if (inputFile == 'Y') {
            string file;
            cout << "Enter file name: ";
            cin >> file;
            fin.open(file);
            if (fin.good() == false) {
                cout << "Invalid. ";
                inputFile = 'X';
            }
        }
        else if (inputFile == 'N') {
            cout << "Okay. Using pre-set file 'little_miss_muffet.txt'" << endl;
            fin.open("missMuffet.txt"); //Using file "little_miss_muffet.txt" in folder
        }
        else {
            cout << "Invalid. ";
        }
    }
    
    //File input with stop text
    finstop.open("englishhStopFfile.txt"); //Using stop text in folder
    
    //File output
    fout.open("output.txt");
    
    
    
    //Read fin file
    while (!fin.eof()) {
        
        lineCount++; 
        lin.clear(); //Clears lin
        getline(fin, line);
        lin.str(line); //Moving getline string into new readable object
        
        while (!lin.eof()) { //Reading line from previous step
            
            lin >> inputWord;
            bool validWord = true;
            
            for (i = 0; i < inputWord.length(); i++) {
                if (ispunct(inputWord[i])) { //removing punctuation
                    inputWord.erase(i, 1);
                    i = 0;
                }
                inputWord[i] = tolower(inputWord[i]); //changing all to lowercase
            }
            
            if (inputWord.length() < 3) { //making sure is greater than 2 characters
                validWord = false;
            }
            
            //Skip words from english.stop.txt using fin and conditions
            while (!finstop.eof()) {
                finstop >> stopWord;
                if (stopWord == inputWord) {
                    validWord = false;
                }
            }
            
            //Since stop.txt is being read completely with each iteration file is closed and reopened
            finstop.close();
            finstop.open("englishhStopFfile.txt");
            
            //Count each unique word, and add to class, add source location
            if (validWord == true) { //All these prior conditions are met
                
                for (i = 0; i < NUM_WORDS; i++) { 
                    if (word[i].OutputWord() == inputWord) { //If word already exists in array
                        word[i].AddOneToCount();
                        i = NUM_WORDS + 1; //Ends loop and activates next condition
                    }
                }
                SetFileWord()
                if (i == NUM_WORDS) { //New word added to character array
                    word[j].SetWord(inputWord);
                    word[j].AddOneToCount();
                    word[j].SetWordLocation(lineCount);
                    j++;
                }
            }
        }
    }
    
    //Format Word - Num Times Used - First location of occurrence, in alphabetical ordercout << "Line # | Number of times used | Word" << endl;
    cout << "Line # | Number of times used | Word" << endl;
    cout << "____________________________________________" << endl;
    fout << "Line # | Number of times used | Word" << endl;
    fout << "____________________________________________" << endl;
    for (i = 0; i < NUM_WORDS; i++) {
        
        bool alphabetical = true;
        
        if (word[i].OutputWord() == "N/A") { //Each word in array of objects pre-set to N/A
            i = NUM_WORDS; //Ends loop
        }
        
        else if (word[i].OutputBool() != true) { //Tests if concordence for the word has already been output
            
            for (j = 0; j < NUM_WORDS; j++) { //Now the object represented by i will be tested against every other object
                
                if (word[j].OutputWord() == "N/A") { //Each word in array of objects pre-set to N/A
                    j = NUM_WORDS; //Ends loop
                }
                else if (word[i].OutputWord().front() > word[j].OutputWord().front() && word[j].OutputBool() != true) { //Condition met if value of first character for i is lower than any first char value for j
                    alphabetical = false;
                }
            }
            
            if (alphabetical == true) {
                cout << " " << word[i].OutputLocation() << "        " << word[i].OutputCount() << "                     " << word[i].OutputWord() << endl;
                cout << "       |                      |     " << endl;
                fout << " " << word[i].OutputLocation() << "        " << word[i].OutputCount() << "                     " << word[i].OutputWord() << endl;
                fout << "       |                      |     " << endl;
                word[i].WordHasBeenOutput(); //Allows loop to skip this i value
                i = -1; //Restarts loop
            }
        }
    }
    
    fin.close();
    finstop.close();
    fout.close();
    
    return 0;
}