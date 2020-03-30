//
//  bed.hpp
//  assignment 4
//
//  Created by Corinne Beaudoin-Pellerin on 2020-03-26.
//  Copyright © 2020 Corinne Beaudoin-Pellerin. All rights reserved.
//

#ifndef bed_h
#define bed_h
#include <stdio.h>


class Bed{
public:
    Bed();
    ~Bed();
    
    int getBedID();
    void setAvailabilty(bool);
    bool getAvailability();
private:
    bool available;
    static int idGenerator;// ID generator initialized to 0
    int id_bed;
    
};


#endif /* bed_hpp */


//Note: they would have a bed number that they would input for all the beds, not necessarily linear.
