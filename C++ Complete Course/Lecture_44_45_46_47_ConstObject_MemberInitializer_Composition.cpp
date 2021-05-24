#include <iostream>
#include "Sally.h"
#include "Birthday.h"
#include "People.h"
using namespace std;

int main()
{
                                                              /////////////// main.cpp ///////////////
    int x =3;
    x=5;
    cout<<x<<endl;

    const int y = 4; // after that cannot be changed.
    cout<<y<<endl;

    Sally obj1(8,7);
    obj1.printSchiz();

    const Sally constobj1(1,2);  /// constant object can be called with
    constobj1.printSchiz2(); /// constant function.

////////////////////////////////////////////////////////////////////

    Sally so(3,76);
    so.print();

////////////////////////////////////////////////////////////////////

    Birthday birthobj(3,29,1997);
    People SelimOzen("\nSelim Tibuk" , birthobj);
    SelimOzen.printInfo();

}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef SALLY_H
#define SALLY_H

                                                              /////////////// sally.h /////////////// header file
class Sally
{
    public:
        Sally(int a ,int b);
        void print();
        void printSchiz();
        void printSchiz2() const; /// constant function prototype

    private:
        int regVar;
        const int constVar;

};

#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally(int a ,int b)
: regVar(a),constVar(b)  /// this is constructor member initialization
{

}
                                                                  /////////////// sally.cpp /////////////// constructor
void Sally::printSchiz()
{
    cout<<"I am the regular function !"<<endl;
}

void Sally::printSchiz2()const ///// constant function declaration
{
    cout<<"I am the constant function !"<<endl;
}


void Sally::print()
{
    cout<<"\nRegular var is  : "<<regVar <<"\nConstant var is : "<<constVar<<endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef PEOPLE_H
#define PEOPLE_H
                                                                /////////////// people.h /////////////// header file
#include<string>
#include "Birthday.h"
using namespace std;

class People
{
    public:
        People(string x , Birthday obj);
        void printInfo();
    private:
        string name;
        Birthday dateofBirth;
};

#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "People.h"
#include <iostream>
using namespace std;
                                                                /////////////// people.cpp /////////////// constructor
People::People(string x , Birthday obj)
: name(x), dateofBirth(obj)
{

}

void People::printInfo()
{
    cout<<name<<" was born on ";
    dateofBirth.printDate();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef BIRTHDAY_H
#define BIRTHDAY_H

                                                            /////////////// birthday.h /////////////// header file
class Birthday
{
    public:
        Birthday(int m, int d, int y);
        void printDate();

    private:
        int month ;
        int day ;
        int year;

};

#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Birthday.h"
#include <iostream>
using namespace std;
                                                             /////////////// birthday.cpp /////////////// constructor
Birthday::Birthday(int m, int d, int y)
{
    month = m ;
    day = d ;
    year =y ;
}

void Birthday::printDate()
{
    cout <<month<<"/"<<day<<"/"<<year<<endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
