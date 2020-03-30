/*
 Corinne Beaudoin-Pellerin 40121353
 
 */

#ifndef inpatient_h
#define inpatient_h
#include "person.h"
#include "date.h"
#include "doctor.h"
#include "bed.h"
#include <iostream>
#include <stdio.h>
using namespace std;

class Inpatient: public Person{
public:
    Inpatient();
    ~Inpatient();
    Inpatient(int, int, int, int, int, int, double, string, string, string, string);
    
    
    void setDateOfArrival(int, int, int);
    void setDateofLeave(int, int, int);
    void setDailyCharge(double);
    void setID(double);
    void setbednumber(int);
    void setDoctor(string, string, string);
    void print();
    
    string getDateOfArrival();
    string getDateofLeave();
    string getNameofDoc();
    double getDailyCharge();
    double getID();
    int getbednumber();
    
    
    
protected:
    Date* arrivalDate;
    int day;
    int month;
    int year;
    int day2;
    int month2;
    int year2;
    Date* leavingDate;
    Doctor* doctor;
    string nameD;
    string specialtyD;
    string licenseD;
    Bed* number_id;
    double daily_charge;
    static int IDGenerator;
    int id_number;
    int bed_number;
    
    
    
};


#endif


