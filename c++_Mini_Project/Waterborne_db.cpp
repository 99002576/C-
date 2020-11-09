#include "Waterborne_db.h"
#include "waterborne.h"
#include "patient.h"

#include <iterator>
#include <list>
void WaterborneDb::addPatient(int i,int a,std::string n,std::string p,std::string c,int s,double amt,std::string dis)
{
    water.push_back(Waterborne(i,a,n,p,c,s,amt,dis));
}
void WaterborneDb::removePatientById(int id){
    std::list<Waterborne>::iterator iter;
    for (iter = water.begin(); iter != water.end(); iter++) {
        if(iter->getId()==id){
            water.erase(iter);
            break;
        }
    }
}
int WaterborneDb::countAllPatients(){
        return water.size();
}
Waterborne* WaterborneDb::findPatientById(int id) {
  std::list<Waterborne>::iterator iter;
  for(iter=water.begin();iter!=water.end();++iter) {
    if(iter->getId()==id)
        return &(*iter);
	}
  return NULL;  //nullptr
}

double WaterborneDb::findMaxCharge(){
    std::list<Waterborne>::iterator iter = water.begin();
    auto maxc= iter->medicineCharge();
    iter++;
    for (; iter != water.end(); iter++) {
    if (maxc< iter->medicineCharge()) {
      maxc = iter->medicineCharge();
    }
  }
  return maxc;
}


int WaterborneDb::findMinDays(){
    std::list<Waterborne>::iterator iter = water.begin();
    auto min= iter->getSpan();
    iter++;
    for (; iter != water.end(); iter++) {
    if (min > iter->getSpan()) {
      min = iter->getSpan();
    }
  }
  return min;
}

double WaterborneDb::findAverageCharge(){

    double sum = 0;
  std::list<Waterborne>::iterator iter;
  for (iter = water.begin(); iter != water.end(); iter++) {
    sum = sum + iter->medicineCharge();
  }

  return sum / water.size();
}

int  WaterborneDb::countPatientsByAge(int age){

int count = 0;
  std::list<Waterborne>::iterator iter;
  for (iter = water.begin(); iter != water.end(); iter++) {
    if (iter->getAge()== age)
      count++;
  }
  return count;
}
int WaterborneDb:: countPatientByAgeRange(int min ,int max){
	std::list<Waterborne>::iterator it;
	int c=0;
	for(it=water.begin();it!=water.end();++it){
		if(it->getAge() > min && it->getAge() < max)
         		c++;
	}
	return c;

}
