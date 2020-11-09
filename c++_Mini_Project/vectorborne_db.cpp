#include "vectorborne_db.h"
#include "vectorborne.h"
#include "patient.h"

#include <iterator>
#include <list>
void VectorborneDb::addPatient(int i,int a,std::string n,std::string p,std::string c,int s,double amt,std::string dis)
{
    water.push_back(Vectorborne(i,a,n,p,c,s,amt,dis));
}
void VectorborneDb::removePatientById(int id){
    std::list<Vectorborne>::iterator iter;
    for (iter = water.begin(); iter != water.end(); iter++) {
        if(iter->getId()==id){
            water.erase(iter);
            break;
        }
    }
}
int VectorborneDb::countAllPatients(){
        return water.size();
}
Vectorborne* VectorborneDb::findPatientById(int id) {
  std::list<Vectorborne>::iterator iter;
  for(iter=water.begin();iter!=water.end();++iter) {
    if(iter->getId()==id)
        return &(*iter);
	}
  return NULL;  //nullptr
}

double VectorborneDb::findMaxCharge(){
    std::list<Vectorborne>::iterator iter = water.begin();
    auto maxc= iter->medicineCharge();
    iter++;
    for (; iter != water.end(); iter++) {
    if (maxc< iter->medicineCharge()) {
      maxc = iter->medicineCharge();
    }
  }
  return maxc;
}


int VectorborneDb::findMinDays(){
    std::list<Vectorborne>::iterator iter = water.begin();
    auto min= iter->getSpan();
    iter++;
    for (; iter != water.end(); iter++) {
    if (min > iter->getSpan()) {
      min = iter->getSpan();
    }
  }
  return min;
}

double VectorborneDb::findAverageCharge(){

    double sum = 0;
  std::list<Vectorborne>::iterator iter;
  for (iter = water.begin(); iter != water.end(); iter++) {
    sum = sum + iter->medicineCharge();
  }

  return sum / water.size();
}

int  VectorborneDb::countPatientsByAge(int age){

int count = 0;
  std::list<Vectorborne>::iterator iter;
  for (iter = water.begin(); iter != water.end(); iter++) {
    if (iter->getAge()== age)
      count++;
  }
  return count;
}
int VectorborneDb:: countPatientByAgeRange(int min ,int max){
	std::list<Vectorborne>::iterator it;
	int c=0;
	for(it=water.begin();it!=water.end();++it){
		if(it->getAge() > min && it->getAge() < max)
         		c++;
	}
	return c;

}
