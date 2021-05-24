#include <iostream>
#include <string>
#include "Burrito.h"
using namespace std;
                                      ////////      main.cpp    ////////
class BuckysClass
{
    public:

        BuckysClass(string z){
            cout << "This constructor will be printed automatically"<<endl ;
            setName(z);
        }

        void setName (string x){
            name = x ;
        }

        string getName (){
            return name;
        }

        void saySomething(){
            cout << "I sad something" <<endl;
        }

    private:
        string name ;
};

int main()
{
    BuckysClass obj1 ("Lucky Bucky Roberts") ;
    cout << obj1.getName()<<endl ;
    obj1.saySomething();
    obj1.setName("Sir Alex Ferguson ") ;
    cout << obj1.getName() ;
    BuckysClass obj2 ("I am your master") ;
    cout << obj2.getName()<<endl;
    Burrito obj3 ;

    return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef BURRITO_H
#define BURRITO_H

class Burrito
{                                    ////////      burrito.h    //////// header file
    public:
        Burrito();

};

#endif

////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Burrito.h"
#include <iostream>

using namespace std;
                                     ////////      burrito.cpp    //////// constructor
Burrito::Burrito()
{
    cout << "I am the police " <<endl ;
}


////////////////////////////////////////////////////////////////////////////////////////////////////

