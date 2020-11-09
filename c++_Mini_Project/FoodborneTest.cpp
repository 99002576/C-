#include "patient.h"
#include "foodborne.h"
#include <gtest/gtest.h>
namespace{
    class FoodborneTest : public :: testing :: Test{
        protected:
        void SetUp(){
            bptr = new Foodborne(10,46,"Thrinath","9786765543","Chennai",14,1600.0,"Mycotoxins");
        }
        void TearDown(){
            delete bptr;
        }
        Foodborne *bptr;
    };

    TEST_F(FoodborneTest,DefaultConstuctor){
        Foodborne b1;
        EXPECT_EQ(0,b1.getId());
        EXPECT_EQ(0,b1.getAge());
        EXPECT_EQ("",b1.getName());
        EXPECT_EQ("",b1.getPhone());
        EXPECT_EQ("",b1.getCity());
        EXPECT_EQ(0,b1.getSpan());
        EXPECT_EQ(1000.0,b1.charge());
        EXPECT_EQ("Mumps",b1.getDisease());
    }
    TEST_F(FoodborneTest,ParameterizedConstuctor){
     Foodborne w1(11,56,"Raj","8765455432","Jammu",15,2500.0,"Mycotoxins");
        EXPECT_EQ(11,w1.getId());
        EXPECT_EQ(56,w1.getAge());
        EXPECT_EQ("Raj",w1.getName());
        EXPECT_EQ("8765455432",w1.getPhone());
        EXPECT_EQ("Jammu",w1.getCity());
        EXPECT_EQ(15,w1.getSpan());
        EXPECT_EQ(2500.0,w1.charge());
        EXPECT_EQ("Mycotoxins",w1.getDisease());
    }

 TEST_F(FoodborneTest,ComputeCharge){
     EXPECT_EQ(22400.0,bptr->medicineCharge());
 }
}
