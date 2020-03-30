#ifndef date_h
#define date_h
# include <iostream>
#include <stdio.h>
using namespace std;

class Date{
public:
    Date();
    Date(int, int, int);
    int getDay();
    int getMonth();
    int getYear();
    
    void printDate();
    
    
protected:
    int day;
    int month;
    int year;
    
    
    
};



#endif /* date_h */


//this pointer is weird. Why is it even important?
//when do we create objects of a class? Is it when we do the new Student(...)? I believe so. Also, when should we do it? Before we initialize an array to nullptr I'm assuming..? In the constructor? In the definitons?
//in the practice, it says that the copy constructor is called for the addStudent. Does this have to be the case? What would happen if  we did not have a copy constructor?
//how would we make an object, which we have initialize to be the same as another, to not point at the same thing?--> important when we delete things. Is it by having a copy constructor? Can
