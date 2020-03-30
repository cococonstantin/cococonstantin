//
//  outpatient.cpp
//  assignment 4
//
//  Created by Corinne Beaudoin-Pellerin on 2020-03-03.
//  Copyright © 2020 Corinne Beaudoin-Pellerin. All rights reserved.
//

#include "outpatient.h"

Outpatient::Outpatient(){
    day_of_appointment = nullptr;
    time_of_appointment = nullptr;
    day = 0;
    month = 0;
    year = 0;
    second = 0;
    minute = 0;
    hour = 0;
    name_doc = nullptr;
    fixed_fee = 0.0;
}

Outpatient::Outpatient(int day, int month, int year, int second, int minute, int hour, double paramFee, string name_doc, string specialty_doc, string license_doc, int id, string paramN): Person(paramN){
    day_of_appointment = new Date(day, month, year);
    time_of_appointment = new Time(second, minute, hour);
    fixed_fee = paramFee;
    doctor = new Doctor(license_doc, specialty_doc,name_doc);
    patient_ID = id;
}

Outpatient :: ~Outpatient(){
    delete day_of_appointment;
    delete time_of_appointment;
    delete doctor;
}

void Outpatient::setTimeAndDayOfAppointment(int second, int minute, int hour, int day, int month, int year){
    day_of_appointment = new Date(day, month, year);
    time_of_appointment = new Time(second, minute, hour);
    
}

