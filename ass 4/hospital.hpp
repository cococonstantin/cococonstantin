//
//  hospital.hpp
//  assignment 4
//
//  Created by Corinne Beaudoin-Pellerin on 2020-03-03.
//  Copyright © 2020 Corinne Beaudoin-Pellerin. All rights reserved.


//read me: You have a bed number and a bed ID... they are NOT the same?

#ifndef hospital_h
#define hospital_h
#include "time.h"
#include "date.h"
#include "person.h"
#include "inpatient.h"
#include "outpatient.h"
#include "doctor.h"
#include "bed.h"
#include <iostream>
#include <stdio.h>
using namespace std;



class Hospital{
    
private:
    Inpatient** inpatient;
    Outpatient** outpatient;
    Bed** bed;
    Doctor** doctor;
    const int capacity = 500;
    const int docs = 100;
    int number;
    int amount;
    int size;
    
public:
    
    bool isthere (int);
    bool isavailable (int );
    bool addbed(Bed *);
    bool removebed( Bed*);
    
    void printBeds();
    void printInpatients();
    
    
    Hospital(int, int);
};

#endif /* hospital_hpp */


//what do you need to do? You need to 1. make a list of all inpatients, outpatients, etc. and make a print function of these.
//2. you need to make a bool available DONE
//3. you need to make sure that you can give a bed. If not, the inpatient is kaput.(done because if you give the option of a bed....) lol DONE
//4. look up beds --> is that one available?
//5. assign a bed/doctor to an inpatient /outpatient (how?) --> make a function (void) and put the outpatient[number] = Doctor* doc??



//ASSIGN A BED TO AN INPATIENT: YOU HAVE A BED NUMBER, WHICH IS THE SAME AS THE UNIQUE BED ID. THIS MEANS THAT WHEN YOU ARE ASSIGNING A BED TO AN INPATIENT, YOU HVAVE TO DO A :
//Search for the bed number inside of the bed-> getID. When you find one which matches,
