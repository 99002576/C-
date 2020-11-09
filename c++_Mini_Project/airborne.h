#ifndef __AIRBORNE_H
#define __AIRBORNE_H
#include "patient.h"
#include <cstdint>
#include <string>
#pragma once


class Airborne : public Patient{
 double charge1;
 std::string disease;
public:
Airborne();
Airborne(int,int,std::string,std::string,std::string,int,double,std::string);
std::string getDisease();
double medicineCharge();
double charge();
};

#endif
