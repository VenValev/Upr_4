#include <iostream>
#include <cstring>

struct Book
{
    char title[30];
    char author[30];
    int ISBN;
    int pageCount;
    Book(const char* title, const char* author[9], int ISBN, int pageCount) : ISBN(ISBN), pageCount(pageCount + 5)
    {

    }
};

int main()
{
    

}


