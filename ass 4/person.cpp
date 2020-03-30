//
//  person.cpp
//  assignment 4
//
//  Created by Corinne Beaudoin-Pellerin on 2020-03-03.
//  Copyright © 2020 Corinne Beaudoin-Pellerin. All rights reserved.
//

#include "person.h"



Person::Person(){
    name = "";
}
Person::Person(string paramName){
    name = paramName;
}

string Person::getName(){
    return name;
}

Person::~Person(){
    
}
void Person::print() const  {
    cout << name << endl;
}
