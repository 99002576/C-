#include "patient.h"
#include "airborne.h"



Airborne :: Airborne() : Patient(){
  charge1 = 1000.0;
 disease = "Mumps";

}

Airborne :: Airborne(int i,int a,string n,string p,string c,int s,double amt,string dis):Patient(i,a,n,p,c,s){
                            disease = dis;
                            charge1 = amt;

}
double Airborne :: charge(){
    return charge1;
}

std::string Airborne :: getDisease(){
    return disease;
}

double Airborne::medicineCharge(){
    return span*charge1;
}


