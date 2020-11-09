#include "patient.h"
#include "airborne.h"
#include "Airborne_db.h"
#include <gtest/gtest.h>


namespace {

class AirborneDbTest : public ::testing::Test {

protected:
  void SetUp() { 
    airs.addPatient(1,22,"arun","7894585875","Vellore",10,1000.0,"Mumps");
            airs.addPatient(2,33,"raju","7845789112","Warangal",20,2000.0,"Flu");
            airs.addPatient(3,25,"vijay","9876589032","Mysuru",14,500.0,"Chicken-pox");
             airs.addPatient(4,44,"trishal","9547658510","Bangalore",22,3000.0,"Malaria");
  }
  void TearDown() {}
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

TEST_F(AirborneDbTest,ComputeTest){
double maxCharge = airs.findMaxCharge();
double avgCharge= airs.findAverageCharge();
int minDays = airs.findMinDays();
int countAge = airs.countPatientsByAge(25);
int ageRange = airs.countPatientByAgeRange(23,35);
 Airborne *ptr = airs.findPatientById(9);

EXPECT_EQ(66000.0,maxCharge);
EXPECT_EQ(30750.0,avgCharge);
EXPECT_EQ(10,minDays);
EXPECT_EQ(1,countAge);
EXPECT_EQ(2,ageRange);
EXPECT_EQ(nullptr, ptr);
Airborne *ptr1 = airs.findPatientById(3);
EXPECT_NE(nullptr, ptr1);
}


} 
// namespace
