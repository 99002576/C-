#ifndef __PATIENT_H
#define __PATIENT_H
#include<string>
using namespace std;
class Patient {
protected :
    int id;
    int age;
    string name;
    string phone;
    string city;
    int span;
    public :
    
    Patient();
    Patient(int,int,std::string,std::string,std::string,int);
    int getId();
    int getAge();
    std::string getName();
    std::string getPhone();
    std::string getCity();
    int getSpan();
    virtual double medicineCharge();
    void display();



};
#endif