#ifndef __FOODBORNE_H
#define __FOODBORNE_H
#include "patient.h"
#include <cstdint>
#include <string>
#pragma once
class Foodborne : public Patient{
 double charge1;
 std::string disease;
public:
Foodborne();
Foodborne(int,int,std::string,std::string,std::string,int,double,std::string);
std::string getDisease();
double medicineCharge();
double charge();
};

#endif
