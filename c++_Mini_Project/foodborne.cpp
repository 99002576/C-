#include "patient.h"
#include "foodborne.h"



Foodborne :: Foodborne() : Patient(){
  charge1 = 1000.0;
 disease = "Mumps";

}

Foodborne :: Foodborne(int i,int a,string n,string p,string c,int s,double amt,string dis):Patient(i,a,n,p,c,s){
                            disease = dis;
                            charge1 = amt;

}
double Foodborne :: charge(){
    return charge1;
}

std::string Foodborne :: getDisease(){
    return disease;
}

double Foodborne::medicineCharge(){
    return span*charge1;
}


