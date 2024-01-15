#include <iostream>
#include <cstring>
using namespace std;

class Book{
    private:
        string title;
    public:
        Book(){}

        Book(const string newTitle){
            title = newTitle;
        }

        Book(Book &book) {
            title = book.title;
        }

        void show(void){
            cout << title << endl;
        }

        ~Book() {
            cout << "Destructor called" << endl;
        }
};

int main(void)
{
    Book book1("Hello C++");
    book1.show();

    Book book2(book1);
    book2.show();
}