//
//  hospital.cpp
//  assignment 4
//
//  Created by Corinne Beaudoin-Pellerin on 2020-03-03.
//  Copyright © 2020 Corinne Beaudoin-Pellerin. All rights reserved.
//

#include "hospital.h"


Hospital::Hospital(int number, int amount){
    
    Inpatient** inpatient= new Inpatient* [capacity];
    //the capacity is 500.
    for (int i=0; i<capacity; i++){
        inpatient[i]= nullptr;
    }
    
    Bed** bed = new Bed* [capacity];
    for (int w=0; w<capacity; w++){
        bed[w]= nullptr;
    }
    
    Outpatient** outpatient = new Outpatient* [number];
    for (int j=0; j<number; j++){
        outpatient[j]= nullptr;
    }
    
    Doctor** doctor = new Doctor* [amount];
    for (int z=0; z<number; z++){
        doctor[z]= nullptr;
    }
    
}



bool Hospital::addbed(Bed *bed1){
    
    for (int i=0; i<capacity; i++){
        
        //you have an array of pointers pointing to the class bed, which hold the data members id and availability.
        if (bed[i]== nullptr){
            bed[i] = bed1;
            
            //here, you are setting the availability of the bed to FALSE, because it will be taken.
            bed1 ->setAvailabilty(false);
            //number of inpatients/beds there/used
            //this means that the bed number of the inatient will be the unique ID of the bed!
            inpatient[i]->setbednumber(bed1->getBedID());
            size++;
            //you dont want to put more than one bed in the system per bed used.
            return true;
        }
    }
    
    cout<<"It is impossible to add another patient to the hospital, there are no more beds available."<<endl;
    return false;
    
}


//this function is made to remove a specific bed.
bool Hospital::removebed(Bed* bed2){
    for (int i=0; i<capacity; i++){
        
        //what we are doing here: we are saying that if the bed ID inside of the array is the same as the ID of the bed2, we want to remove it  from the array!
        if (bed[i]->getBedID() == bed2->getBedID()){
            bed[i] = nullptr;
            //this makes the bed be able to be taken.
            bed2->setAvailabilty(true);
            
            //this for loop is made to make the nullptrs be at the end of the array ( we want to put the new beds at the end)
            for (int j=i; j<capacity-1; j++){
                bed[i]= bed[i+1];
                
            }
            size --;
            return true;}
    }
    
    //this would only happen if there is no bed ID which is the same ID as bed 2 (improbable)
    return false;
}


//this searches to see if a specific bed is available
bool Hospital::isavailable (int id){
    for (int i=0; i<capacity; i++){
        bool flag =  bed[i]->getAvailability();
        int temp_number = bed[i]->getBedID();
        if (temp_number == id){
            //if the bed is available to be taken
            if (flag==true){
                cout<<"The bed is available."<<endl;
                //return true WHEN it is available
                return true;
            }
            cout<<"The bed is already in use by an inpatient"<<endl;
            return false;
        }
    }
    return false;
}



bool Hospital::isthere(int id){
    for (int i=0; i<capacity; i++){
        if (bed[i]->getBedID() == id)
            return true;}
    return false;
}


//prints out all the beds of the hospital.
//void Hospital::printBeds(){
//for (int i=0; i<capacity; i++){
// cout<<"the beds are:"<< bed[i]->getBedID();
//cout<<"these are the availabilities:"<<bed[i]->getAvailability();
//


//prints out all the inpatients from the hospital
//void Hospital::printInpatients(){
//for (int i=0; i<capacity; i++){
//cout<<"the IDs of the inpatients are: "<<inpatient[i]->getID()<<endl;
////cout<<"the names of the patients are: "<< inpatient[i]->getName();
// cout<<"the bed numbers of the patients are:"<<inpatient[i]->getbednumber();
//cout<<"the list of doctors currently associated to the inpatients"<<inpatient[i]->getNameofDoc();
//}

//}

//prints out all the outpatients from the hospital

