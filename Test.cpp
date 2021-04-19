#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <stdexcept>
#include <iostream>


using ariel::NumberWithUnits;
NumberWithUnits three_m(3,"m");
NumberWithUnits n2(40,"cm");
NumberWithUnits n3(3.4,"m");
NumberWithUnits n4(340,"cm");
NumberWithUnits three_kg(3,"kg");
NumberWithUnits n5(3.4,"cm");

TEST_CASE("equals"){

    CHECK(three_m+n2=n3);
    CHECK(three_m+n2=n4);
    CHECK_EQ(n3,n4);
    
    // cin
    // cout
    

    

    


}
TEST_CASE("Not Equals"){
    CHECK_NE(n3,n5);


}

TEST_CASE("throws"){
    CHECK_THROWS(three_m+three_kg);

}