#include "patient.h"
#include "airborne.h"
#include <gtest/gtest.h>
namespace{
    class AirborneTest : public :: testing :: Test{
        protected:
        void SetUp(){
            bptr = new Airborne(9,45,"likitha","9889568574","baroda",13,1500.0,"cough");
        }
        void TearDown(){
            delete bptr;
        }
        Airborne *bptr;
    };

    TEST_F(AirborneTest,DefaultConstuctor){
        Airborne b1;
        EXPECT_EQ(0,b1.getId());
        EXPECT_EQ(0,b1.getAge());
        EXPECT_EQ("",b1.getName());
        EXPECT_EQ("",b1.getPhone());
        EXPECT_EQ("",b1.getCity());
        EXPECT_EQ(0,b1.getSpan());
        EXPECT_EQ(1000.0,b1.charge());
        EXPECT_EQ("Mumps",b1.getDisease());
    }
    TEST_F(AirborneTest,ParameterizedConstuctor){
     Airborne w1(10,55,"yash","9748510365","Srinagar",15,2500.0,"cold");
        EXPECT_EQ(10,w1.getId());
        EXPECT_EQ(55,w1.getAge());
        EXPECT_EQ("yash",w1.getName());
        EXPECT_EQ("9748510365",w1.getPhone());
        EXPECT_EQ("Srinagar",w1.getCity());
        EXPECT_EQ(15,w1.getSpan());
        EXPECT_EQ(2500.0,w1.charge());
        EXPECT_EQ("cold",w1.getDisease());
    }

 TEST_F(AirborneTest,ComputeCharge){
     EXPECT_EQ(19500.0,bptr->medicineCharge());
 }
}
