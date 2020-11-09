#ifndef __VECTORBORNE_H
#define __VECTORBORNE_H
#include "patient.h"
#include <cstdint>
#include <string>
#pragma once


class Vectorborne : public Patient{
 double charge1;
 std::string disease;
public:
Vectorborne();
Vectorborne(int,int,std::string,std::string,std::string,int,double,std::string);
std::string getDisease();
double medicineCharge();
double charge();
};

#endif
