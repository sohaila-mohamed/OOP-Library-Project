#include<iostream>
#include"library.hpp"
#include"books.hpp"

int Library::current_amountofbooks=0;

Library::Library(int size )
{
    this->size=size;
    this->library_books=new Book[size];
}
Library::~Library()
{
    delete[] library_books;

}

  void Library::addbooks(const Book  & book )
  {
      if (current_amountofbooks<size)
      {
        this->library_books[current_amountofbooks++]=book;
        std::cout<<"Now you have "<<current_amountofbooks<<"in your library and "<<size-current_amountofbooks<<"free "<<std::endl;

      }
      else
      {
        std::cout<<"sorry you don't have a free space in your library."<<std::endl;

      }
    


  }
 Book Library::getbook(int id)
 {
    return this->library_books[id-1];
    
 }
 void Library::showbooks() const
 {
    if(current_amountofbooks>0)
    {
     std::cout<<"here is the Books you have in this library"<<std::endl;
     for(int i=0;i<current_amountofbooks;i++)
     {
        std::cout<<"book title : "<<library_books[i].getTITLE()<<"  ";
        std::cout<<"book ID : " <<library_books[i].getID()<<std::endl;
          
            
     }
    }
    else
    {
        std::cout<<"your library is empty "<<std::endl;
    }

 }
 void Library::lendbooks(int a )
 {
    int  position =a-1;
    if(current_amountofbooks>0 )
    {
        for(int i=0;i<current_amountofbooks-1;i++)
        {
            if(i>=position)
            {
                this->library_books[i]=this->library_books[i+1];


            }
        }
        this->current_amountofbooks--;
    }



 }


