#ifndef __FOODBORNEDB_H
#define __FODBORNEDB_H
#include "patient.h"
#include "foodborne.h"
#include <iostream>
#include <iterator>
#include <list>

class FoodborneDb{
std::list<Foodborne> food;
public:
void addPatient(int i,int a,std::string n,std::string p,std::string c,int s,double amt,std::string dis);
  void removePatientById(int i);
  int countAllPatients();
  Foodborne* findPatientById(int);
  double findMaxCharge();
  int findMinDays();
 double findAverageCharge();
  int countPatientsByAge(int);
int countPatientByAgeRange(int min ,int max);

};
#endif
