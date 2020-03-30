//
//  doctor.hpp
//  assignment 4
//
//  Created by Corinne Beaudoin-Pellerin on 2020-03-03.
//  Copyright © 2020 Corinne Beaudoin-Pellerin. All rights reserved.
//


#endif /* doctor_hpp */
//
//  doctor.cpp
//  assignment 4
//
//  Created by Corinne Beaudoin-Pellerin on 2020-03-03.
//  Copyright © 2020 Corinne Beaudoin-Pellerin. All rights reserved.
//

#include "doctor.h"

Doctor::Doctor(string paramLisence,string paramSpecialty, string paramName):Person(paramName){
    med_license = paramLisence;
    specialty = paramSpecialty;
}



