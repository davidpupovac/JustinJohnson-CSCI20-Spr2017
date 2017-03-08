// created by Justin Johnson
// created on 2/27/17
//  creating book informationwith class and objects

#include <iostream>
#include <string>
using namespace std;

class Book {
    public:
    void SetBookTitle( string title);
    void SetBookAuthor(string author);
    void SetCopyRightYear(int copyRight);
    void SetGenreOfBook(string bookGenre);
    void SetAgeGroup(int ageRange);
    
    string GetBookTitle();
    string GetBookAuthor();
    int GetCopyRightYear();
    int GetAgeGroup();
    string GetGenreOfBook(); 
    
    private:
    string bookTitle = "";
    string bookAuthor = "'";
    int copyRightYear =0 ;
    string genreOfBook = "";
    int ageGroup =0 ;
};

void Book::SetBookTitle(string title){ 
    bookTitle = title;
}
void Book::SetBookAuthor(string author){
    bookAuthor = author;
}
void Book::SetCopyRightYear(int copyRight){
    copyRightYear = copyRight;
}
void Book::SetGenreOfBook(string bookGenre){
    genreOfBook = bookGenre;
}
void Book::SetAgeGroup(int ageRange){
    ageGroup = ageRange;
}

string Book::GetBookTitle() {
    return bookTitle;
}
string Book::GetBookAuthor() {
    return bookAuthor;
}
int Book::GetCopyRightYear()  {
    return copyRightYear;
}
int Book::GetAgeGroup() {
    return ageGroup;
}
string Book::GetGenreOfBook() {
    return genreOfBook;
}

int main(){
    Book bookOne;    // geting info from the class Book
    Book bookTwo;
    Book bookThree;
    Book bookFour;
    Book bookFive;
    
    cout << " Please enter the title of the book. " << endl;
    getline(cin, bookOne.SetBookTitle());

  
}