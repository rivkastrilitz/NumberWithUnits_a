#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <stdexcept>
#include <iostream>
#include<stdio.h>
#include <fstream>
#include <sstream>


using ariel::NumberWithUnits;
NumberWithUnits m3(3,"m");
NumberWithUnits cm40(40,"cm");
NumberWithUnits m3_4(3.4,"m");
NumberWithUnits cm340 (340,"cm");
NumberWithUnits kg3(3,"kg");
NumberWithUnits cm3_4(3.4,"cm");
NumberWithUnits sec60(60,"sec");
NumberWithUnits min1(1,"min");
NumberWithUnits sec1(1,"sec");

TEST_CASE("equals"){

    CHECK(cm40+m3==cm340);
    CHECK(m3+cm40==m3_4);
    CHECK_EQ(cm340,m3_4);
    
    // -
        CHECK_EQ(-cm40,NumberWithUnits{-40,"cm"});
        CHECK(cm40-m3_4==-m3);
        // chek if temp changes -=
        NumberWithUnits temp(7,"g");
        temp-=kg3;
        CHECK_EQ(temp,NumberWithUnits{-2993,"g"});

    // +
        CHECK_EQ(+cm40,NumberWithUnits{40,"cm"});
        // chek if converting acorrding to first 
        CHECK(m3+cm40==m3_4);
        CHECK(cm40+m3==cm340);
         // chek if temp changes +=
        NumberWithUnits temp1(7,"g");
        temp1+=kg3;
        CHECK_EQ(temp1,NumberWithUnits{3007,"g"});

    // *
        CHECK_EQ(3*sec60,NumberWithUnits{180,"sec"});
        CHECK_EQ(3*sec60,NumberWithUnits{3,"min"});
        CHECK_EQ(sec60*3.0,NumberWithUnits{3,"min"});
    
    // == < > !
        CHECK(sec60==min1);
        CHECK(sec60<=min1);
        CHECK(sec60>=min1);
        CHECK(NumberWithUnits{1,"sec"}<min1);
        CHECK(sec60!=NumberWithUnits{1,"h"});
        CHECK(min1<sec60*5);

    // ++ --
        CHECK(++min1==min1+min1);
        CHECK(++min1!=min1+sec1);
        CHECK(min1++!=min1+min1);
        CHECK(min1++==min1);

        CHECK(--min1==min1-min1);
        CHECK(--min1!=min1-sec1);
        CHECK(min1--!=min1-min1);
        CHECK(min1--==min1);
    
    // cin

    // cout
    //    std::ostream out= std::cout<<m3<<std::endl;
    

    

    


}
TEST_CASE("Not Equals"){
    CHECK_NE(m3_4,cm3_4);


}

TEST_CASE("throws"){
    CHECK_THROWS(m3+kg3);

}