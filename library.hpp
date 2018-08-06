#include<iostream>
#ifndef library_H_INCLUDED
#define library_H_INCLUDED
#include"books.hpp"

class Library
{
    int size;
    Book * library_books;
    static int current_amountofbooks; 
    public:
    friend Book;
    Library(int );
    ~Library();
    void addbooks(const Book &); // refernce 
    Book getbook(int);
    void showbooks() const;
    void lendbooks(int );


};




#endif