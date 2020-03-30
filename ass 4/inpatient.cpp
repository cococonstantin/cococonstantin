//

#include "inpatient.h"
//create a destructor.

int Inpatient::IDGenerator = 0;

Inpatient::Inpatient(){
    arrivalDate = nullptr;
    leavingDate = nullptr;
    day = 0;
    month = 0;
    year= 0;
    day2 = 0;
    month2 = 0;
    year2 = 0;
    daily_charge = 0.0;
    doctor = nullptr;
    
}

Inpatient::Inpatient(int day, int month, int year, int day2, int month2, int year2, double paramCharge, string nameD, string specialtyD, string licenseD, string ParamName):Person(ParamName)
{
    id_number= ++IDGenerator;
    arrivalDate = new Date(day, month, year);
    leavingDate = new Date(day2, month2, year2);
    doctor = new Doctor(nameD, specialtyD, licenseD);
    daily_charge = paramCharge;
}


Inpatient::~Inpatient(){
    delete arrivalDate;
    delete leavingDate;
    delete doctor;
}

void Inpatient::setDailyCharge(double paramC){
    daily_charge = paramC;
}

void Inpatient::setID(double paramID){
    id_number = paramID;
}

void Inpatient::setbednumber(int paramB){
    bed_number = paramB;
}


void Inpatient::setDateOfArrival(int day,int month, int year){
    
    arrivalDate = new Date(day, month, year);
}

void Inpatient::setDateofLeave(int day2, int month2, int year2){
    leavingDate = new Date(day2, month2, year2);
}


void Inpatient::setDoctor(string nameD
                          , string specialtyD, string licenseD){
    doctor = new Doctor(nameD, specialtyD, licenseD);
}


double Inpatient::getDailyCharge(){
    return daily_charge;
}

double Inpatient::getID(){
    return id_number;
}

int Inpatient::getbednumber(){
    return bed_number;
}

string Inpatient::getDateOfArrival(){
    return(to_string(day)+"/"+to_string(month)+"/"+to_string(year));
}

string Inpatient::getDateofLeave(){
    return(to_string(day2)+"/"+to_string(month2)+"/"+to_string(year2));
}

string Inpatient::getNameofDoc(){
    return(nameD+" and "+ specialtyD + " and " + licenseD);
}



void Inpatient::print(){
    
    cout<<"the IDs of the inpatients are: "<<id_number<<endl;
    cout<<"the names of the patients are: "<< name<<endl;
    cout<<"the date of arrival is: "<<getDateOfArrival()<<endl;
    cout<<"the date the of leave is: "<<getDateofLeave()<<endl;
    cout<<"the doctor treating the patient is: "<<getNameofDoc();
    
}


