#include "patient.h"
#include "vectorborne.h"
#include "vectorborne_db.h"
#include <gtest/gtest.h>

namespace {

class VectorborneDbTest : public ::testing::Test {

protected:
  void SetUp() { 
            wirs.addPatient(1,11,"Naimisha","9852004637","Jamshedpur",20,2000.0,"Onchocerciasis");
            wirs.addPatient(2,33,"Aruna","8457203600","Calicut",15,5000.0,"Enteric diseases");
            wirs.addPatient(3,43,"Pavan","9800456713","Delhi",25,1000.0,"Leishmaniasis");
            wirs.addPatient(4,24,"Susheel","7874150036","Patna",30,4000.0,"Leishmaniasis");
  }
  void TearDown() {}
  VectorborneDb wirs;
};

TEST_F(VectorborneDbTest,AddPatientTest){
     wirs.addPatient(5,49,"Sahas","9965400387","Surat",2,1000.0,"Trachoma");
     EXPECT_EQ(5,wirs.countAllPatients());

 }
 TEST_F(VectorborneDbTest,RemovePatientTest){
      wirs.removePatientById(4);
     EXPECT_EQ(3,wirs.countAllPatients());
 }
TEST_F(VectorborneDbTest,CountTest){
    EXPECT_EQ(4,wirs.countAllPatients());
}

TEST_F(VectorborneDbTest,ComputeTest){
double maxCharge = wirs.findMaxCharge();
double avgCharge=  wirs.findAverageCharge();
int minDays =  wirs.findMinDays();
int countAge =  wirs.countPatientsByAge(11);
int ageRange =  wirs.countPatientByAgeRange(10,94);
 Vectorborne *ptr =  wirs.findPatientById(9);

EXPECT_EQ(120000.0,maxCharge);
EXPECT_EQ(65000.0,avgCharge);
EXPECT_EQ(15,minDays);
EXPECT_EQ(1,countAge);
EXPECT_EQ(4,ageRange);
EXPECT_EQ(nullptr, ptr);
Vectorborne *ptr1 = wirs.findPatientById(2);
EXPECT_NE(nullptr, ptr1);
}
} 
// namespace
