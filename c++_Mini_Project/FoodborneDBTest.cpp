#include "patient.h"
#include "foodborne.h"
#include "Foodborne_db.h"
#include <gtest/gtest.h>
/*namespace{
    class AirborneDbTest : public testing :: Test{
        protected:
        void SetUp(){
            airs.addPatient(1,22,"arun","7894585875","Vellore",10,1000.0,"Mumps");
            airs.addPatient(2,33,"raju","7845789112","Warangal",20,2000.0,"Flu");
            airs.addPatient(3,25,"vijay","9876589032","Mysuru",14,500.0,"Chicken-pox");
             airs.addPatient(4,44,"trishal","9547658510","Bangalore",22,3000.0,"Malaria");
     }
     void TearDown(){}
     AirborneDb airs;
    };
 TEST_F(AirborneDbTest,AddPatientTest){
     airs.addPatient(5,49,"rahul","8547575003","Chennai",7,5000.0,"Covid");
     EXPECT_EQ(5,airs.countAllPatients());

 }
 TEST_F(AirborneDbTest,RemovePatientTest){
     airs. removePatientById(4);
     EXPECT_EQ(3,airs.countAllPatients());
 }
TEST_F(AirborneDbTest,CountTest){
    EXPECT_EQ(4,airs.countAllPatients());
}
/*
TEST_F(AirborneDb,ComputeTest){
double maxCharge = airs.findMaxCharge();
EXPECT_EQ(5000.0,maxCharge)

}

}*/

namespace {

class FoodborneDbTest : public ::testing::Test {

protected:
  void SetUp() { 
    firs.addPatient(1,21,"Nithin","8009233242","Hyderabad",11,1100.0,"E-Coli");
            firs.addPatient(2,22,"Ramesh","9025671232","Bangalore",14,1000.0,"Salmonella(non-typhodical)");
            firs.addPatient(3,23,"Suresh","8900222233","Chennai",16,1000.0,"Botulism");
            firs.addPatient(4,24,"Jignesh","9034567563","Kolkatta",17,1050.0,"Listeriosis");
  }
  void TearDown() {}
  FoodborneDb firs;
};

TEST_F(FoodborneDbTest,AddPatientTest){
     firs.addPatient(5,29,"Shubham","7382903233","Coimbatore",15,2000.0,"Covid");
     EXPECT_EQ(5,firs.countAllPatients());

 }
 TEST_F(FoodborneDbTest,RemovePatientTest){
      firs.removePatientById(4);
     EXPECT_EQ(3,firs.countAllPatients());
 }
TEST_F(FoodborneDbTest,CountTest){
    EXPECT_EQ(4,firs.countAllPatients());
}

TEST_F(FoodborneDbTest,ComputeTest){
double maxCharge = firs.findMaxCharge();
double avgCharge=  firs.findAverageCharge();
int minDays =  firs.findMinDays();
int countAge =  firs.countPatientsByAge(21);
int ageRange =  firs.countPatientByAgeRange(21,24);
 Foodborne *ptr =  firs.findPatientById(9);

EXPECT_EQ(17850.0,maxCharge);
EXPECT_EQ(14987.5,avgCharge);
EXPECT_EQ(11,minDays);
EXPECT_EQ(1,countAge);
EXPECT_EQ(2,ageRange);
EXPECT_EQ(nullptr, ptr);
Foodborne *ptr1 = firs.findPatientById(3);
EXPECT_NE(nullptr, ptr1);
}
} 
// namespace
