#include "patient.h"
#include <iostream>
Patient :: Patient() : id(0),age(0),name(""),phone(""),city(""),span(0){}
Patient :: Patient(int i,int a,string n,string p,string c,int s) : id(i),age(a),name(n),phone(p),city(c),span(s){}
int Patient :: getId(){ return id; }
int Patient :: getAge(){ return age; }
std::string Patient::getName(){ return name; }
std::string Patient::getPhone(){ return phone; }
std::string Patient::getCity(){ return city; }
int Patient::getSpan(){ return span; }
void Patient:: display() {
    std::cout <<"id : " << id <<" ," <<"age :"<< " ,"<< age << "name :" << name << " ," << "phone :" << phone <<" ," <<"city :"<<
    city << " ," << "span :" << span << "\n";
}
double Patient::medicineCharge(){
    return span*1000;
}