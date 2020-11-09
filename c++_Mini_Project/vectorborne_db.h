#ifndef __VECTORBORNEDB_H
#define __VECTORBORNEDB_H
#include "patient.h"
#include "vectorborne.h"
#include <iostream>
#include <iterator>
#include <list>

class VectorborneDb{
std::list<Vectorborne> water;
public:
void addPatient(int i,int a,std::string n,std::string p,std::string c,int s,double amt,std::string dis);
  void removePatientById(int i);
  int countAllPatients();
  Vectorborne* findPatientById(int);
  double findMaxCharge();
  int findMinDays();
 double findAverageCharge();
  int countPatientsByAge(int);
int countPatientByAgeRange(int min ,int max);

};
#endif
