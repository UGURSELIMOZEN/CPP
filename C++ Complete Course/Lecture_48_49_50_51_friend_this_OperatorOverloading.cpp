#include <iostream>
#include "Hannah.h"
#include "Sally.h"
using namespace std;
                                                            ////////////////// main.cpp //////////////////////
class StankFist{
    public:
        StankFist(){stinkyVar =0;}

    private:
        int stinkyVar;

    friend void stinkysFriend(StankFist &sfo);

};

void stinkysFriend(StankFist &sfo)
{
    sfo.stinkyVar =99;
    cout<<sfo.stinkyVar <<endl;
}

int main()
{
    StankFist bob ;
    stinkysFriend(bob);

///////////////////////////////////////////////

    Hannah ho (23);
    ho.printCrap();

///////////////////////////////////////////////

    Sally a(34);
    Sally b(21);
    Sally c ;

    c = a+b; /// C++ recognizes plus sign as operator function from cpp file.
    cout<<c.num<<endl;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef SALLY_H
#define SALLY_H

                                                        ////////////////// sally.h ////////////////////// header file
class Sally
{
    public:
        int num;
        Sally();
        Sally(int);
        Sally operator+(Sally);


};

#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Sally.h"
#include <iostream>
using namespace std;
                                                          ////////////////// sally.cpp ////////////////////// constructor
Sally::Sally()
{

}

Sally::Sally(int a)
{
   num = a;
}

Sally Sally::operator+(Sally aso)
{
    Sally brandNew;
    brandNew.num = num + aso.num ;
    return(brandNew);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef HANNAH_H
#define HANNAH_H
                                                                ////////////////// hannah.h ////////////////////// header file

class Hannah
{
    public:
        Hannah(int num);
        void printCrap();


    private:
        int h;
};

#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Hannah.h"
#include <iostream>
using namespace std;
                                                              ////////////////// hannah.cpp ////////////////////// constructor
Hannah::Hannah(int num)
:h(num)
{

}

void Hannah::printCrap()
{
    cout <<endl;
    cout <<"h = " <<h<<endl;
    cout <<"this -> h =  "<< this->h  <<endl;
    cout <<"(*this).h =  "<< (*this) .h  <<endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
