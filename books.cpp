#include<iostream>
#include"library.hpp"
#include"books.hpp"
int Book:: count =0 ;
Book::Book ()
{
  
}
Book::~Book()
{

}
Book::Book(std::string author , std::string title ,int py)
{
    
    this->author=author;
    this->title=title ;
    this->publication_year=py;
    this->ID=++count ;

}
Book::Book(const Book & book)
{
    
    this->author=book.getAUTHOR();
    this->title=book.getTITLE();
    this->publication_year=book.getpy();
    this->ID=1+Book::count;


}


int  Book::getID() const 
{
    return this->ID;
}

std::string Book:: getTITLE() const 
{
    return this->title;
}
int Book:: getpy() const 
{
    return this->publication_year;
}
std::string Book::getAUTHOR() const 
{
    return this->author;
}
int  Book:: getcounts()
{
    return count;
}
/*void Book::operator =(const Book& book) 
{
   this->author=book.getAUTHOR();
   this->title=book.getTITLE();
   this->publication_year=book.getpy();
   this->ID=1+Book::count;



}
*/