#ifndef __WATERBORNE_H
#define __WATERBORNE_H
#include "patient.h"
#include <cstdint>
#include <string>
#pragma once


class Waterborne : public Patient{
 double charge1;
 std::string disease;
public:
Waterborne();
Waterborne(int,int,std::string,std::string,std::string,int,double,std::string);
std::string getDisease();
double medicineCharge();
double charge();
};

#endif
