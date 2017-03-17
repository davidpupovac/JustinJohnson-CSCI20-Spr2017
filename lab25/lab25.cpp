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
    Book bookInfo;
    
    string bookTitle1;  // book title, author etc..
    string bookAuthor1;
    int bookCopyRight1;
    string bookGenre1;
    int bookAgeGroup1;
    
    cout << "Please enter the title for the first book. "<< endl;
    getline(cin, bookTitle1);
    bookInfo.SetBookTitle(bookTitle1);
    
    cout << " Author of the book? "<< endl;
    getline(cin, bookAuthor1);
    bookInfo.SetBookAuthor(bookAuthor1);
    
    cout << "Enter the year the book was copyrighted"<< endl;
    cin >> bookCopyRight1;
    bookInfo.SetCopyRightYear(bookCopyRight1);
    
    cout << "What is the gerne of the book? "<< endl;
    getline(cin, bookGenre1);
    bookInfo.SetGenreOfBook(bookGenre1);
    
    cout << " What is an apporite age to read this book? " << endl;
    cin >> bookAgeGroup1;
    bookInfo.SetAgeGroup(bookAgeGroup1); 
    cout << endl;

    cout << " We will repete this process four more times " << endl;
    cout << endl;

    string bookTitle2;  // book 2
    string bookAuthor2;
    int bookCopyRight2;
    string bookGenre2;
    int bookAgeGroup2;
    
    cout << "Please enter the title for the second book. " << endl;
    getline(cin, bookTitle2);
    bookInfo.SetBookTitle(bookTitle2);
    
    cout << " Author of the book? " << endl;
    getline(cin, bookAuthor2);
    bookInfo.SetBookAuthor(bookAuthor2);
    
    cout << "Enter the year the book was copyrighted" << endl;
    cin >> bookCopyRight2;
    bookInfo.SetCopyRightYear(bookCopyRight2);
    
    cout << "What is the gerne of the book? " << endl;
    getline(cin, bookGenre2);
    bookInfo.SetGenreOfBook(bookGenre2);
    
    cout << " What is an apporite age to read this book? " << endl;
    cin >> bookAgeGroup2;
    bookInfo.SetAgeGroup(bookAgeGroup2);
    
    string bookTitle3;  // book 3
    string bookAuthor3;
    int bookCopyRight3;
    string bookGenre3;
    int bookAgeGroup3;
    
    cout << "Please enter the title for the thrid book. "<< endl;
    getline(cin, bookTitle3);
    bookInfo.SetBookTitle(bookTitle3);
    
    cout << " Author of the book? " << endl;
    getline(cin, bookAuthor3);
    bookInfo.SetBookAuthor(bookAuthor3);
    
    cout << "Enter the year the book was copyrighted" << endl;
    cin >> bookCopyRight3;
    bookInfo.SetCopyRightYear(bookCopyRight3);
    
    cout << "What is the gerne of the book? " << endl;
    getline(cin, bookGenre3);
    bookInfo.SetGenreOfBook(bookGenre3);
    
    cout << " What is an apporite age to read this book? " << endl;
    cin >> bookAgeGroup3;
    bookInfo.SetAgeGroup(bookAgeGroup3);
    
    string bookTitle4;  // book 4
    string bookAuthor4;
    int bookCopyRight4;
    string bookGenre4;
    int bookAgeGroup4;
    
    cout << "Please enter the title for the fourth book. "<< endl;
    getline(cin, bookTitle4);
    bookInfo.SetBookTitle(bookTitle4);
    
    cout << " Author of the book? " << endl;
    getline(cin, bookAuthor4);
    bookInfo.SetBookAuthor(bookAuthor4);
    
    cout << "Enter the year the book was copyrighted" << endl;
    cin >> bookCopyRight4;
    bookInfo.SetCopyRightYear(bookCopyRight4);
    
    cout << "What is the gerne of the book? " << endl;
    getline(cin, bookGenre4);
    bookInfo.SetGenreOfBook(bookGenre4);
    
    cout << " What is an apporite age to read this book? " << endl;
    cin >> bookAgeGroup4;
    bookInfo.SetAgeGroup(bookAgeGroup4);
    
    string bookTitle5;  // book 5
    string bookAuthor5;
    int bookCopyRight5;
    string bookGenre5;
    int bookAgeGroup5;
    
    cout << "Please enter the title for the fith book. "<< endl;
    getline(cin, bookTitle5);
    bookInfo.SetBookTitle(bookTitle5);
    
    cout << " Author of the book? " << endl;
    getline(cin, bookAuthor5);
    bookInfo.SetBookAuthor(bookAuthor5);
    
    cout << "Enter the year the book was copyrighted" << endl;
    cin >> bookCopyRight5;
    bookInfo.SetCopyRightYear(bookCopyRight5);
    
    cout << "What is the gerne of the book? " << endl;
    getline(cin, bookGenre5);
    bookInfo.SetGenreOfBook(bookGenre5);
    
    cout << " What is an apporite age to read this book? " << endl;
    cin >> bookAgeGroup5;
    bookInfo.SetAgeGroup(bookAgeGroup5);
    
    cout << " Thank you here is your information you enterd for the books. " << endl;
    cout << endl;
    
    cout << "Book 1:" << endl;
    cout << bookTitle1 <<" "<< bookAuthor1 <<" "<< bookCopyRight1 <<" "<<  bookGenre1 <<" "<< bookAgeGroup1;
    cout << endl;
  
    cout << "Book 2:" << endl;
    cout << bookTitle2 <<" "<< bookAuthor2 <<" "<< bookCopyRight2 <<" "<<  bookGenre2 <<" "<< bookAgeGroup2;
    cout << endl;  
    
        cout << "Book 3:" << endl;
    cout << bookTitle3 <<" "<< bookAuthor3 <<" "<< bookCopyRight3 <<" "<<  bookGenre3 <<" "<< bookAgeGroup3;
    cout << endl;
    
        cout << "Book 4:" << endl;
    cout << bookTitle4 <<" "<< bookAuthor4 <<" "<< bookCopyRight4 <<" "<<  bookGenre4 <<" "<< bookAgeGroup4;
    cout << endl;
    
        cout << "Book 5:" << endl;
    cout << bookTitle5 <<" "<< bookAuthor5 <<" "<< bookCopyRight5 <<" "<<  bookGenre5 <<" "<< bookAgeGroup5;
    cout << endl;
}