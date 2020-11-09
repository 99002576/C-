#include "patient.h"
#include "vectorborne.h"
#include <gtest/gtest.h>
namespace{
    class VectorborneTest : public :: testing :: Test{
        protected:
        void SetUp(){
            bptr = new Vectorborne(11,49,"Lokesh","9087654756","Kochi",2,10000.0,"Malaria");
        }
        void TearDown(){
            delete bptr;
        }
        Vectorborne *bptr;
    };

    TEST_F(VectorborneTest,DefaultConstuctor){
        Vectorborne b1;
        EXPECT_EQ(0,b1.getId());
        EXPECT_EQ(0,b1.getAge());
        EXPECT_EQ("",b1.getName());
        EXPECT_EQ("",b1.getPhone());
        EXPECT_EQ("",b1.getCity());
        EXPECT_EQ(0,b1.getSpan());
        EXPECT_EQ(1000.0,b1.charge());
        EXPECT_EQ("Dengue",b1.getDisease());
    }
    TEST_F(VectorborneTest,ParameterizedConstuctor){
     Vectorborne w1(15,25,"Preethy","9547858587","Jaipur",11,2670.0,"Chagas disease");
        EXPECT_EQ(15,w1.getId());
        EXPECT_EQ(25,w1.getAge());
        EXPECT_EQ("Preethy",w1.getName());
        EXPECT_EQ("9547858587",w1.getPhone());
        EXPECT_EQ("Jaipur",w1.getCity());
        EXPECT_EQ(11,w1.getSpan());
        EXPECT_EQ(2670.0,w1.charge());
        EXPECT_EQ("Chagas disease",w1.getDisease());
    }

 TEST_F(VectorborneTest,ComputeCharge){
     EXPECT_EQ(20000.0,bptr->medicineCharge());
 }
}
