#include "patient.h"
#include "waterborne.h"



Waterborne :: Waterborne() : Patient(){
  charge1 = 1000.0;
 disease = "Cholera";

}

Waterborne :: Waterborne(int i,int a,string n,string p,string c,int s,double amt,string dis):Patient(i,a,n,p,c,s){
                            disease = dis;
                            charge1 = amt;

}
double Waterborne :: charge(){
    return charge1;
}

std::string Waterborne :: getDisease(){
    return disease;
}

double Waterborne::medicineCharge(){
    return span*charge1;
}


