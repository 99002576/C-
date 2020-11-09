#ifndef __AIRBORNEDB_H
#define __AIRBORNEDB_H
#include "patient.h"
#include "airborne.h"
#include <iostream>
#include <iterator>
#include <list>

class AirborneDb{
std::list<Airborne> air;
public:
void addPatient(int i,int a,std::string n,std::string p,std::string c,int s,double amt,std::string dis);
  void removePatientById(int i);
  int countAllPatients();
  Airborne* findPatientById(int);
  double findMaxCharge();
  int findMinDays();
 double findAverageCharge();
  int countPatientsByAge(int);
int countPatientByAgeRange(int min ,int max);

};
#endif
