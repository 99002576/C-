#include "patient.h"
#include "waterborne.h"
#include <gtest/gtest.h>
namespace{
    class WaterborneTest : public :: testing :: Test{
        protected:
        void SetUp(){
            bptr = new Waterborne(9,45,"Rajat","9676282282","Jammu",25,6675.0,"Typhoid");
        }
        void TearDown(){
            delete bptr;
        }
        Waterborne *bptr;
    };

    TEST_F(WaterborneTest,DefaultConstuctor){
        Waterborne b1;
        EXPECT_EQ(0,b1.getId());
        EXPECT_EQ(0,b1.getAge());
        EXPECT_EQ("",b1.getName());
        EXPECT_EQ("",b1.getPhone());
        EXPECT_EQ("",b1.getCity());
        EXPECT_EQ(0,b1.getSpan());
        EXPECT_EQ(1000.0,b1.charge());
        EXPECT_EQ("Cholera",b1.getDisease());
    }
    TEST_F(WaterborneTest,ParameterizedConstuctor){
     Waterborne w1(10,55,"Arun","8549595944","Chennai",13,1750.0,"Dysentery");
        EXPECT_EQ(10,w1.getId());
        EXPECT_EQ(55,w1.getAge());
        EXPECT_EQ("Arun",w1.getName());
        EXPECT_EQ("8549595944",w1.getPhone());
        EXPECT_EQ("Chennai",w1.getCity());
        EXPECT_EQ(13,w1.getSpan());
        EXPECT_EQ(1750.0,w1.charge());
        EXPECT_EQ("Dysentery",w1.getDisease());
    }

 TEST_F(WaterborneTest,ComputeCharge){
     EXPECT_EQ(166875.0,bptr->medicineCharge());
 }
}
