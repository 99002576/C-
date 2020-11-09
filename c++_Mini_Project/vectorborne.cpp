#include "patient.h"
#include "vectorborne.h"



Vectorborne :: Vectorborne() : Patient(){
  charge1 = 1000.0;
 disease = "Dengue";

}

Vectorborne :: Vectorborne(int i,int a,string n,string p,string c,int s,double amt,string dis):Patient(i,a,n,p,c,s){
                            disease = dis;
                            charge1 = amt;

}
double Vectorborne :: charge(){
    return charge1;
}

std::string Vectorborne :: getDisease(){
    return disease;
}

double Vectorborne::medicineCharge(){
    return span*charge1;
}


