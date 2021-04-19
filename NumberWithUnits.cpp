#include "NumberWithUnits.hpp"
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>

#include <string>


using namespace std;
using namespace ariel;

namespace ariel{

    
    

    NumberWithUnits::NumberWithUnits(double num,const char* ch){
        this->number=num;
        this->unit=ch;
    }



    NumberWithUnits n(0,"9");

    void ariel::NumberWithUnits::read_units(ifstream& units){

    }


    // onary
    NumberWithUnits operator+ (const NumberWithUnits& n1){
        return n;
    }

    // return n1 after changes
    NumberWithUnits operator += (const NumberWithUnits &n1 ,const NumberWithUnits& n2){
        return n;
    }
    NumberWithUnits operator+ (const NumberWithUnits& n1,const NumberWithUnits& n2){
        return n;
    }

    // onary
    NumberWithUnits operator- (const NumberWithUnits& n1){
        return n;
    }

    // return n1 after changes
    NumberWithUnits operator-= (const NumberWithUnits& n1,const NumberWithUnits& n2){
        return n;
    }
    NumberWithUnits operator- (const NumberWithUnits& n1,const NumberWithUnits& n2){
        return n;
    }

    NumberWithUnits operator *(const NumberWithUnits& n1,double d){
        return n;
    }
            
    NumberWithUnits operator *(double d, NumberWithUnits& n1){
        return n;
    }
            

    bool operator <(const NumberWithUnits&  n1,const NumberWithUnits& n2){
        return true;
    }
    bool operator <=(const NumberWithUnits&  n1,const NumberWithUnits& n2){
        return true;
    }
    bool operator >(const NumberWithUnits& n1,const NumberWithUnits& n2){
        return true;
    }
    bool operator >=(const NumberWithUnits& n1,const NumberWithUnits& n2){
        return true;
    }
    bool operator ==(const NumberWithUnits & n1,const NumberWithUnits& n2){
        return true;
    }
    bool operator !=(const NumberWithUnits& n1,const NumberWithUnits& n2){
        return true;
    }

     // // // // prefix and postfix 
        // ++x
        NumberWithUnits operator++(const NumberWithUnits& n1){
             
            // return NumberWithUnits ans(n1.number+1,n1.unit);
        }
        // x++
        NumberWithUnits operator++(const NumberWithUnits& n1,int num){
            return n;
        } 
        
         // --x
        NumberWithUnits operator--(const NumberWithUnits& n1){
            return n;
        }
        // x--
        NumberWithUnits operator--(const NumberWithUnits& n1,int num){
            return n;
        }
     // // // // // //  input and output 
        std::ostream& operator << (std::ostream& out,const NumberWithUnits& n1){
            out<<n1.number<<" ["<<n1.unit <<" ]"<<endl;
            return out;
        }
        std::istream& operator >>(std::istream& in, NumberWithUnits& n1){
            return in;
        }
}
