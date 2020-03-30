#ifndef doctor_h
#define doctor_h
#include "person.h"
#include <iostream>
#include <stdio.h>
using namespace std;

class Doctor:public Person{
public:
    void setMedicalLisence(string);
    Doctor(string, string, string);
private:
    string med_license;
    string specialty;
};
