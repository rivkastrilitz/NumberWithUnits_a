#include "NumberWithUnits.hpp"
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>


using namespace std;
using namespace ariel;

namespace ariel{

    
    

    NumberWithUnits::NumberWithUnits(double num,const string str){
        this->number=num;
        this->unit=str;
    }



    NumberWithUnits n(0,"9");

    void ariel::NumberWithUnits::read_units(ifstream& units){

    }


    // onary
    NumberWithUnits operator+ (const NumberWithUnits& n1){
        return n1;
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
       return NumberWithUnits (n1.number*-1,n1.unit);
    }

    // return n1 after changes
    NumberWithUnits operator-= (const NumberWithUnits& n1,const NumberWithUnits& n2){
        return n;
    }
    NumberWithUnits operator- (const NumberWithUnits& n1,const NumberWithUnits& n2){
        return n;
    }

    NumberWithUnits operator *(const NumberWithUnits& n1,double d){
        return NumberWithUnits (n1.number *d,n1.unit);
    }
            
    NumberWithUnits operator *(double d, NumberWithUnits& n1){
        return NumberWithUnits (n1.number *d,n1.unit);
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
        NumberWithUnits operator++(NumberWithUnits& n1){
              
            return NumberWithUnits (++n1.number,n1.unit);
        }
        // x++
        NumberWithUnits operator++(NumberWithUnits& n1,int num){
            
            return NumberWithUnits (n1.number++,n1.unit);
            
        } 
        
         // --x
        NumberWithUnits operator--(NumberWithUnits& n1){
            return NumberWithUnits (--n1.number,n1.unit);
        }

        // x--
        NumberWithUnits operator--(NumberWithUnits& n1,int num){
            return NumberWithUnits (n1.number--,n1.unit);
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
