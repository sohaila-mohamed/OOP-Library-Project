#include<iostream>
#include"library.hpp"
#include"books.hpp"
#ifndef user_H_INCLUDED
#define user_H_INCLUDED

class user 
{
    protected:
    std::string FristName,LastName;
    public:
    user(std::string,std::string);
    ~user();
    std::string getFristName();
    std::string getLastName();

};

class brower : public user
{
    Book * my_books ;
    public:
    int maxnumberOfbooks;
    static int currentnumberOfbooks; 
    brower(std::string,std::string );
    void borrow(Library & , const Book &) const; 
    void showBooks();
    void returnbooks(Library &, int) const ;
    //void operator =(const brower &) const ;


    ~brower();
    



};









#endif