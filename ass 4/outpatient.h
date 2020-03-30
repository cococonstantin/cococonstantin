#ifndef outpatient_h
#define outpatient_h

#include <stdio.h>
#include "date.h"
#include "time.h"
#include "doctor.h"
#include <iostream>
#include <stdio.h>
using namespace std;

class Outpatient : public Person{
public:
    Outpatient();
    Outpatient(int, int, int, int, int, int, double, string, string, string, int, string);
    ~Outpatient();
    
    
    void setTimeAndDayOfAppointment(int, int, int, int, int, int);
    void setChargeForOneVisit(double);
    void setPatient_ID(int);
    void setDoctor(string, string, string);
    void print();
    
    string getTimeAndDayOfAppointment();
    double getChargeForOneVisit();
    int getPatient_ID();
    string getDoctor();
    
    
    
private:
    Date* day_of_appointment;
    Time* time_of_appointment;
    int day;
    int month;
    int year;
    int second;
    int minute;
    int hour;
    string name_doc;
    string spacialty_doc;
    string license_doc;
    double fixed_fee;
    Doctor* doctor;
    int patient_ID;
    
    
    //it is a double because it could change from person to person i guess.
    
    
    //WE COULD ADD THEM INSIDE OF THE CONSTRUCTOR!I get it heheheh
    
    
};


#endif


//0 or many vs 1 or many : the array of secretaries can be set to null inside of managers BUT you cannot set to null the manager array inside of secretary (secrataries mus have at least one supervisor!)


