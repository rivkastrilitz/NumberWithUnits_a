#pragma once
#include <iostream>

#include <fstream>


using namespace std;

namespace ariel{
    
    class NumberWithUnits{
        private:
            double number;
            string unit;
        
        public:
            NumberWithUnits(double num,const string str);
       
        static void read_units(ifstream& units);

        // // // // + - *
        friend NumberWithUnits operator+ (const NumberWithUnits& n1); // onary
        friend NumberWithUnits operator+= (const NumberWithUnits& n1,const NumberWithUnits& n2);
        friend NumberWithUnits operator+ (const NumberWithUnits& n1,const NumberWithUnits& n2);
        
        friend NumberWithUnits operator- (const NumberWithUnits& n1 ); // onary
        friend NumberWithUnits operator-= (const NumberWithUnits& n1,const NumberWithUnits& n2);
        friend NumberWithUnits operator- (const NumberWithUnits& n1,const NumberWithUnits& n2);

        friend NumberWithUnits operator *(const NumberWithUnits& n1,double d);
        friend NumberWithUnits operator *(double d,NumberWithUnits& n1);
        
        
        friend bool operator <(const NumberWithUnits& n1,const NumberWithUnits& n2);
        friend bool operator <=(const NumberWithUnits&  n1,const NumberWithUnits& n2);
        friend bool operator >(const NumberWithUnits&  n1,const NumberWithUnits& n2);
        friend bool operator >=(const NumberWithUnits& n1,const NumberWithUnits&  n2);
        friend bool operator ==(const NumberWithUnits&  n1,const NumberWithUnits&  n2);
        friend bool operator !=(const NumberWithUnits&  n1,const NumberWithUnits& n2);


        

        // // // // prefix and postfix 
        // ++x
        friend NumberWithUnits operator++(NumberWithUnits& n1);
        // x++
        friend NumberWithUnits operator++(NumberWithUnits& n1,int); 
        
        // --x
        friend NumberWithUnits operator--( NumberWithUnits& n1);
        // x--
        friend NumberWithUnits operator--( NumberWithUnits& n1,int); 

        // // // // // //  input and output 
        friend ostream& operator << (ostream& out,const NumberWithUnits& n1);
        friend istream& operator >> (istream& in, NumberWithUnits& n1);
        


    };
}