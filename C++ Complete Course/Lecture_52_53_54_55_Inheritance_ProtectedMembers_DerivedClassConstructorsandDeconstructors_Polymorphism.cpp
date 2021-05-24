#include <iostream>
#include "Daughter.h"
#include "Mother.h"
using namespace std;
                                                                  //////////////// main.cpp //////////////////
class Enemy
{
    protected:
        int attackPower;
    public:
        void setAttackPower(int a)
        {
            attackPower = a;
        }
};

class Ninja : public Enemy
{
    public:
        void attack()
        {
            cout<<"I am a ninja ,ninja chop !  -"<<attackPower<<endl;
        }
};

class Monster : public Enemy
{
    public:
        void attack()
        {
            cout<<"Monster must eat you !!!  -"<<attackPower<<endl;
        }
};

int main()
{
    Mother mom ;
    mom.sayName();

    Daughter tina ;
    tina.sayName();
    tina.doSomething();

////////////////////////////////////////////

    Ninja n ;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;
    enemy1->setAttackPower(29);
    enemy2->setAttackPower(99);
    n.attack();
    m.attack();

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef MOTHER_H
#define MOTHER_H

                                                                //////////////// mother.h ////////////////// header file
class Mother
{
    public:
        int publicVar;
        Mother();
        ~Mother();
        void sayName();

    protected:
        int protectedVar;

    private:
        int privateVar;


};

#endif


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Mother.h"
#include <iostream>
using namespace std;
                                                                     //////////////// mother.cpp ////////////////// constructor
Mother::Mother()
{
   cout<<"I am the mother constructor !"<<endl;
}

Mother::~Mother()
{
   cout<<"I am the mother deconstructor !"<<endl;
}

void Mother::sayName()
{
    cout<<"I am a mother !"<<endl;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef DAUGHTER_H
#define DAUGHTER_H
                                                                 //////////////// daughter.h ////////////////// header file
#include "Mother.h"

class Daughter: public Mother
{
    public:
        Daughter();
        ~Daughter();
        void doSomething();


};

#endif

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Daughter.h"
using namespace std;
                                                                  ////////////////// daughter.cpp /////////////// constructor
Daughter::Daughter()
{
    cout<<"I am the daughter constructor !"<<endl;
}


Daughter::~Daughter()
{
    cout<<"I am the daughter deconstructor !"<<endl;
}


void Daughter::doSomething()
{
    publicVar = 1;      // privateVar = 3  you can reach to public variable of Mother main class from this derived class.
    protectedVar = 2;   // privateVar = 3  you can reach to protected variable of Mother main class from this derived class.
    // privateVar = 3  you cannot reach to private variable of Mother main class from this derived class.
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
