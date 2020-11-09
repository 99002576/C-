#ifndef __WATERBORNEDB_H
#define __WATERBORNEDB_H
#include "patient.h"
#include "waterborne.h"
#include <iostream>
#include <iterator>
#include <list>

class WaterborneDb{
std::list<Waterborne> water;
public:
void addPatient(int i,int a,std::string n,std::string p,std::string c,int s,double amt,std::string dis);
  void removePatientById(int i);
  int countAllPatients();
  Waterborne* findPatientById(int);
  double findMaxCharge();
  int findMinDays();
 double findAverageCharge();
  int countPatientsByAge(int);
int countPatientByAgeRange(int min ,int max);

};
#endif
