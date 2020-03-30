
//
//  date.cpp
//  assignment 4
//
//  Created by Corinne Beaudoin-Pellerin on 2020-03-03.
//  Copyright © 2020 Corinne Beaudoin-Pellerin. All rights reserved.
//

#include "date.h"

Date::Date(){
    day = 0;
    month = 0;
    year = 0;
}

Date::Date(int paramDay, int paramMonth, int paramYear){
    day = ( paramDay >= 0 && paramDay < 32 ) ? paramDay : 0;
    month = ( paramMonth >= 0 && paramMonth < 13 ) ? paramMonth : 0;
    year = ( paramYear >= 0  ) ? paramYear : 0;
    
    
}



void Date::printDate() {
    cout<<day<<"/"<<month<<"/"<<year<<endl;
    
}
