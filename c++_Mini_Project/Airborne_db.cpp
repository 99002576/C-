#include "Airborne_db.h"
#include "airborne.h"
#include "patient.h"

#include <iterator>
#include <list>
void AirborneDb::addPatient(int i,int a,std::string n,std::string p,std::string c,int s,double amt,std::string dis)
{
    air.push_back(Airborne(i,a,n,p,c,s,amt,dis));
}
void AirborneDb::removePatientById(int id){
    std::list<Airborne>::iterator iter;
    for (iter = air.begin(); iter != air.end(); iter++) {
        if(iter->getId()==id){
            air.erase(iter);
            break;
        }
    }
}
int AirborneDb::countAllPatients(){
        return air.size();
}
Airborne* AirborneDb::findPatientById(int id) {
  std::list<Airborne>::iterator iter;
  for(iter=air.begin();iter!=air.end();++iter) {
    if(iter->getId()==id)
        return &(*iter);
	}
  return NULL;  //nullptr
}

double AirborneDb::findMaxCharge(){
    std::list<Airborne>::iterator iter = air.begin();
    auto maxc= iter->medicineCharge();
    iter++;
    for (; iter != air.end(); iter++) {
    if (maxc< iter->medicineCharge()) {
      maxc = iter->medicineCharge();
    }
  }
  return maxc;
}


int AirborneDb::findMinDays(){
    std::list<Airborne>::iterator iter = air.begin();
    auto min= iter->getSpan();
    iter++;
    for (; iter != air.end(); iter++) {
    if (min > iter->getSpan()) {
      min = iter->getSpan();
    }
  }
  return min;
}

double AirborneDb::findAverageCharge(){

    double sum = 0;
  std::list<Airborne>::iterator iter;
  for (iter = air.begin(); iter != air.end(); iter++) {
    sum = sum + iter->medicineCharge();
  }

  return sum / air.size();
}

int  AirborneDb::countPatientsByAge(int age){

int count = 0;
  std::list<Airborne>::iterator iter;
  for (iter = air.begin(); iter != air.end(); iter++) {
    if (iter->getAge()== age)
      count++;
  }
  return count;
}
int AirborneDb:: countPatientByAgeRange(int min ,int max){
	std::list<Airborne>::iterator it;
	int c=0;
	for(it=air.begin();it!=air.end();++it){
		if(it->getAge() > min && it->getAge() < max)
         		c++;
	}
	return c;

}
