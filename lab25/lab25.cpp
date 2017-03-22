// created by Justin Johnson
// created on 2/27/17
//  this prgram will take info for 5 books and output  with use from class and objects

#include <iostream>
#include <string>
using namespace std;

class Book {
    public:
    void SetBookTitle( string title);
    void SetBookAuthor(string author);
    void SetCopyRightYear(int copyRight);
    
    void printTitle();
    void printAuthor();
    void printCopyYear();

    string GetBookTitle();
    string GetBookAuthor();
    int GetCopyRightYear();
    
    private:
    string bookTitle = "";
    string bookAuthor = "'";
    int copyRightYear =0 ;
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

string Book::GetBookTitle() {
    return bookTitle;
}
string Book::GetBookAuthor() {
    return bookAuthor;
}
int Book::GetCopyRightYear()  {
    return copyRightYear;
}

void Book::printTitle(){
    cout << "The Title is: "<< GetBookTitle()<< endl;
    
}
void Book::printAuthor(){
    cout << "the Author is:" << GetBookAuthor() << endl;
}
void Book::printCopyYear(){
    cout << "the year copy righted is: " << GetCopyRightYear() << endl;
}
int main(){
       string bookTitle;
       string bookAuthor  ;
       int bookCopyRight;
       
Book bookInfo1;

    
    cout << "Please enter the title for the first book. "<< endl;
    getline(cin, bookTitle);
    bookInfo1.SetBookTitle(bookTitle);
    
    cout << " Author of the book? "<< endl;
    getline(cin, bookAuthor);
    bookInfo1.SetBookAuthor(bookAuthor);
    
    cout << "Enter the year the book was copyrighted"<< endl;
    cin >> bookCopyRight;
    bookInfo1.SetCopyRightYear(bookCopyRight);
    
    bookInfo1.printTitle();
    
Book bookInfo2;

    
    cout << "Please enter the title for the second book. "<< endl;
    getline(cin, bookTitle);
    bookInfo2.SetBookTitle(bookTitle);
    
    cout << " Author of the book? "<< endl;
    getline(cin, bookAuthor);
    bookInfo2.SetBookAuthor(bookAuthor);
    
    cout << "Enter the year the book was copyrighted"<< endl;
    cin >> bookCopyRight;
    bookInfo2.SetCopyRightYear(bookCopyRight);
    
    bookInfo2.printTitle();
    bookInfo2.printAuthor();
    
    
}