//
//  bed.cpp
//  assignment 4
//
//  Created by Corinne Beaudoin-Pellerin on 2020-03-26.
//  Copyright © 2020 Corinne Beaudoin-Pellerin. All rights reserved.
//

#include "bed.h"
using namespace std;
#include <iostream>

int Bed::idGenerator;

Bed::Bed(){
    available = true;
    id_bed = idGenerator;
    idGenerator++;
}


//this function will be called inside of the hospital class.
void Bed::setAvailabilty(bool paramAvailable){
    available = paramAvailable;
    if (available == true){
        cout<<"this bed is available"<<endl;
    }
    else
        cout<<"not available"<<endl;
    
}

bool Bed::getAvailability(){
    return available;
}

int Bed::getBedID(){
    return id_bed;
}
