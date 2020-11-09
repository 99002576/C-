#include "patient.h"
#include "waterborne.h"
#include "Waterborne_db.h"
#include <gtest/gtest.h>

namespace {

class WaterborneDbTest : public ::testing::Test {

protected:
  void SetUp() { 
    wirs.addPatient(1,11,"Nithin","8783278322","Hyderabad",10,1000.0,"Hepatitis A");
            wirs.addPatient(2,12,"Arun","9063636737","Coimbatore",15,1000.0,"Salmonella");
            wirs.addPatient(3,13,"Panini","9834673674","Delhi",17,1000.0,"Dysentry");
            wirs.addPatient(4,14,"Sourav","8793453455","Kolkatta",18,1550.0,"Typhoid");
  }
  void TearDown() {}
  WaterborneDb wirs;
};

TEST_F(WaterborneDbTest,AddPatientTest){
     wirs.addPatient(5,49,"Sachin","8734668743","Panagarh",5,3000.0,"Covid");
     EXPECT_EQ(5,wirs.countAllPatients());

 }
 TEST_F(WaterborneDbTest,RemovePatientTest){
      wirs.removePatientById(4);
     EXPECT_EQ(3,wirs.countAllPatients());
 }
TEST_F(WaterborneDbTest,CountTest){
    EXPECT_EQ(4,wirs.countAllPatients());
}

TEST_F(WaterborneDbTest,ComputeTest){
double maxCharge = wirs.findMaxCharge();
double avgCharge=  wirs.findAverageCharge();
int minDays =  wirs.findMinDays();
int countAge =  wirs.countPatientsByAge(12);
int ageRange =  wirs.countPatientByAgeRange(11,14);
 Waterborne *ptr =  wirs.findPatientById(9);

EXPECT_EQ(27900.0,maxCharge);
EXPECT_EQ(17475.0,avgCharge);
EXPECT_EQ(10,minDays);
EXPECT_EQ(1,countAge);
EXPECT_EQ(2,ageRange);
EXPECT_EQ(nullptr, ptr);
Waterborne *ptr1 = wirs.findPatientById(3);
EXPECT_NE(nullptr, ptr1);
}
} 
// namespace
