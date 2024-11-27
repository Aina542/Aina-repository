#include <iostream>
using namespace std;
struct Book
 {
    string title;
    string author;
    int yearOfPublication;
    int numPages;
};
void inputBookInfo(Book &book)
 {
    cout << "Enter title: ";
    getline(cin, book.title);
    
    cout << "Enter author: ";
    getline(cin, book.author);
    
    cout << "Enter year of publication: ";
    cin >> book.yearOfPublication;
    
    cout << "Enter number of pages: ";
    cin >> book.numPages;
	    
    cin.ignore();
}
void displayBookInfo(const Book &book)
 {
    cout << "\nTitle: " << book.title;
    cout << "\nAuthor: " << book.author;
    cout << "\nYear of Publication: " << book.yearOfPublication;
    cout << "\nNumber of Pages: " << book.numPages << endl;
}
int main()
 {   
    Book books[5];
	    
    for (int i = 0; i < 5; i++)
	 {
        cout << "\nEnter information for book " << i + 1 << ":\n";
        inputBookInfo(books[i]);
    }   
    cout << "\nDisplaying book information:\n";
    for (int i = 0; i < 5; i++)
	 {
        cout << "\nBook " << i + 1 << ":";
        displayBookInfo(books[i]);
    }
    return 0;
}