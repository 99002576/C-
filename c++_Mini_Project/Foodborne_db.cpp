#include "Foodborne_db.h"
#include "foodborne.h"
#include "patient.h"

#include <iterator>
#include <list>
void FoodborneDb::addPatient(int i,int a,std::string n,std::string p,std::string c,int s,double amt,std::string dis)
{
    food.push_back(Foodborne(i,a,n,p,c,s,amt,dis));
}
void FoodborneDb::removePatientById(int id){
    std::list<Foodborne>::iterator iter;
    for (iter = food.begin(); iter != food.end(); iter++) {
        if(iter->getId()==id){
            food.erase(iter);
            break;
        }
    }
}
int FoodborneDb::countAllPatients(){
        return food.size();
}
Foodborne* FoodborneDb::findPatientById(int id) {
  std::list<Foodborne>::iterator iter;
  for(iter=food.begin();iter!=food.end();++iter) {
    if(iter->getId()==id)
        return &(*iter);
	}
  return NULL;  //nullptr
}

double FoodborneDb::findMaxCharge(){
    std::list<Foodborne>::iterator iter = food.begin();
    auto maxc= iter->medicineCharge();
    iter++;
    for (; iter != food.end(); iter++) {
    if (maxc< iter->medicineCharge()) {
      maxc = iter->medicineCharge();
    }
  }
  return maxc;
}


int FoodborneDb::findMinDays(){
    std::list<Foodborne>::iterator iter = food.begin();
    auto min= iter->getSpan();
    iter++;
    for (; iter != food.end(); iter++) {
    if (min > iter->getSpan()) {
      min = iter->getSpan();
    }
  }
  return min;
}

double FoodborneDb::findAverageCharge(){

    double sum = 0;
  std::list<Foodborne>::iterator iter;
  for (iter = food.begin(); iter != food.end(); iter++) {
    sum = sum + iter->medicineCharge();
  }

  return sum / food.size();
}

int  FoodborneDb::countPatientsByAge(int age){

int count = 0;
  std::list<Foodborne>::iterator iter;
  for (iter = food.begin(); iter != food.end(); iter++) {
    if (iter->getAge()== age)
      count++;
  }
  return count;
}
int FoodborneDb:: countPatientByAgeRange(int min ,int max){
	std::list<Foodborne>::iterator it;
	int c=0;
	for(it=food.begin();it!=food.end();++it){
		if(it->getAge() > min && it->getAge() < max)
         		c++;
	}
	return c;

}
