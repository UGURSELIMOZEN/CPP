#include <iostream>
#include "Sally.h"
using namespace std;
                                      ///////////// main.cpp ///////////////
int main()
{
    char c;
    int a;
    double b;
    cout<< sizeof(c)<<endl;
    cout<< sizeof(a)<<endl;
    cout<< sizeof(b)<<endl;

    double bucky[10];
    cout<< sizeof(bucky)<<endl;
    cout<< sizeof(bucky) / sizeof(bucky[0]) <<endl;
    cout<<endl;

//////////////////////////////////////////////////////////////////

    int buckys[5];
    int *bp0 = &buckys[0];
    int *bp1 = &buckys[1];
    int *bp2 = &buckys[2];
    cout<<"bp0 Pointer is at : "<<bp0<<endl;
    cout<<"bp1 Pointer is at : "<<bp1<<endl;
    cout<<"bp2 Pointer is at : "<<bp2<<endl;

    bp0 = bp0 + 2 ; // it just changes address of it 2 step forward.
    cout<<"bp0 Pointer is now at : "<<bp0<<endl;

    bp1++;          // it just changes address of it 1 step forward.
    cout<<"bp1 Pointer is now at : "<<bp1<<endl;

    bp2 = bp2 - 2 ; // it just changes address of it 2 step backward.
    cout<<"bp2 Pointer is now at : "<<bp2<<endl;

/////////////////////////////////////////////////////////////////////

    Sally obj1;
    Sally *sallyPointer = &obj1 ;
    obj1.printCrap();
    sallyPointer->printCrap();

////////////////////////////////////////////////////////////////

    return 0;
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef SALLY_H
#define SALLY_H

                                         ///////////// sally.h /////////////// header file
class Sally
{
    public:
        Sally();
        void printCrap();
        ~Sally();

    protected:

    private:
};

#endif

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Sally.h"
#include <iostream>
using namespace std;
                                              ///////////// sally.cpp /////////////// constructor
Sally::Sally()
{
    cout <<"\nI am the constructor !" <<endl ;
}

Sally::~Sally()
{
    cout <<"\nI am the deconstructor !" <<endl ;
}

void Sally::printCrap()
{
    cout<<"\nDid you look at me ?" <<endl;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
