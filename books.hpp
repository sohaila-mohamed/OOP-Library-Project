#include<iostream>
#include"library.hpp"
#ifndef books_H_INCLUDED
#define books_H_INCLUDED

class Book
{
    static int count ;
    std::string author,title;
    int publication_year ;
    int ID;
    public:
    Book ();
    ~Book();
    Book(const Book &);
    Book(std::string  , std::string ,int );
    int getID() const;
    std::string getTITLE()const;
    int getpy()const;
    std::string getAUTHOR() const;
    static int getcounts();
    //void operator =(const Book&)  ;

};




#endif