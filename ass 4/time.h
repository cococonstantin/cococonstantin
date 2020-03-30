
//
//  time.hpp
//  assignment 4
//
//  Created by Corinne Beaudoin-Pellerin on 2020-03-03.
//  Copyright © 2020 Corinne Beaudoin-Pellerin. All rights reserved.
//

#ifndef time_h
#define time_h

#include <iostream>
#include <stdio.h>
using namespace std;

class Time{
public:
    Time();
    Time(int, int, int);
    int getHour();
    int getMinute();
    int getSecond();
    void printTime();
    
    
protected:
    int second;
    int minute;
    int hour;
    
    
    
};



#endif /* time_h */


//note to self : do the exercise 5 in class composition!
//what is a member initializing list? Why is it important?
