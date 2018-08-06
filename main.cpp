#include<iostream>
#include"library.hpp"
#include"books.hpp"
#include"user.hpp"
#include"user.cpp"
int main()
{
    const Book book1("ahmed ","alibaba",1997);
    const Book book2("mohamed  ","arabi",1998);
    const Book book3("mostafa ","women",1999);
    const Book book4("ali ","man",2000);
    const Book book5("maged ","baby",2001);
    const Book book6(book1);
    
    Library my_library(10);
    my_library.addbooks(book1);
    my_library.addbooks(book2);
    my_library.addbooks(book3);
    my_library.addbooks(book4);
    my_library.addbooks(book5);
    //my_library.addbooks(book6);

    
    /*std::cout<<book1.getID()<<std::endl;
    std::cout<<book3.getID()<<std::endl;
   std::cout<<my_library.getbook(1).getTITLE()<<std::endl;
   std::cout<<Book::getcounts()<<std::endl;
*/
brower me("sohaila","mohamed ");
me.borrow(my_library, book1);
me.borrow(my_library,book2);
me.borrow(my_library,book3);
me.borrow(my_library,book4);
me.borrow(my_library,book5);
//me.borrow(my_library,book6);
me.showBooks();
me.returnbooks(my_library, 1);
my_library.showbooks();
// brow function not working yet 
//me.borrow(boo6);
//me.showBooks();




   




}