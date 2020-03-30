
#include "time.h"

Time::Time(){
    second = 0;
    minute = 0;
    hour = 0;
}

Time::Time(int paramSecond, int paramMinute, int paramHour){
    
    
    second = ( paramSecond >= 0 && paramSecond < 61 ) ? paramSecond : 0;
    minute = ( paramMinute >= 0 && paramMinute < 61 ) ? paramMinute : 0;
    hour = ( paramHour >= 0 && paramHour < 25 ) ? paramHour : 0;
    
}



void Time::printTime() {
    cout<<second<<":"<<minute<<":"<<hour<<endl;
    
}
