#include<iostream>
#include"library.hpp"
#include"books.hpp"
#include"books.cpp"
#include"user.hpp"
#include"library.cpp"

int brower::currentnumberOfbooks=0;
user::user(std::string FN,std::string LN)
{
    FristName=FN;
    LastName=LN;

}
user::~user()
{

}
std::string user::getFristName()
{
    return this->FristName;
}

std::string user::getLastName()
{
    return this->LastName;
}

brower::brower(std::string FN,std::string LN) :user(FN,LN)
{
    maxnumberOfbooks=5;
    my_books=new Book[maxnumberOfbooks];

}
brower::~brower()
{
    delete[] my_books;
}
void brower::borrow(Library & library, const Book & book) const 
{
    if(currentnumberOfbooks<maxnumberOfbooks)
    {
        this->my_books[currentnumberOfbooks++]=book;
        library.lendbooks(book.getID());
        
    }
    else
    {
      std::cout<<"sorry you have exceeded the number of books you allowed to borrow "<<std::endl;
    }
    std::cout<<"until now you have borrowed "<<currentnumberOfbooks<<"  and you can borrow "<<maxnumberOfbooks-currentnumberOfbooks<<std::endl;
}

void brower::showBooks() 
{
    std::cout<<"here is the Books you have borrowed"<<std::endl;
    for(int i=0;i<currentnumberOfbooks;i++)
    {
         std::cout<<"book title : "<<my_books[i].getTITLE()<<"  ";
         std::cout<<"book ID : " <<my_books[i].getID()<<std::endl;
    }
}
 
void brower::returnbooks( Library& library, int a) const 
{
    int position = a-1;
   if(this->currentnumberOfbooks>0)
   {
       library.addbooks(this->my_books[position]);
       for(int i=0;i<currentnumberOfbooks-1;i++)
       {
           if(i>=position)
           {
               this->my_books[i]=this->my_books[i+1];
           }
       }
    this->currentnumberOfbooks--;
 
   }
   else
   {
       std::cout<<"you don't have books to return "<<std::endl;

   }
    
}











