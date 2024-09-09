#include <iostream>
#include <string.h>
using namespace std;
struct Book
{
    string name;
    int id;
    float price;
    /* data */
};
void printbook(struct Book *book)
{
    cout << "Book name:" << book->name << endl;
    cout << "Book id:" << book->id << endl;
    cout << "Book price:" << book->price << endl;
}
int main()
{
    struct Book book1;
    // strcpy(book1.name,"the silent patient");
    book1.name = "The silent patient";
    book1.price = 25.6;
    book1.id = 101;
    printbook(&book1);

    return 0;
}

