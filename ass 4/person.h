//
//  person.hpp
//  assignment 4
//
//  Created by Corinne Beaudoin-Pellerin on 2020-03-03.
//  Copyright © 2020 Corinne Beaudoin-Pellerin. All rights reserved.
//

#ifndef person_hpp
#define person_hpp
#include <iostream>
#include <stdio.h>
#include "date.h"
#include "time.h"
using namespace std;

class Person{
protected:
    string name;
    
public:
    string getName();
    virtual void print() const;
    Person();
    Person(string);
    virtual ~Person();
};

#endif

