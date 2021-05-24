#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////

class Enemy{
    public:
        virtual void attack(){
            cout<<"I am the enemy class !"<<endl; // virtual void attack()=0;
        }                 // this is how we make it as pure virtual function.
};

class Ninja: public Enemy{
    public:
        void attack(){
            cout<<"ninja attack !"<<endl;
        }
};

class Monster: public Enemy {
    public:
        void attack(){
            cout<<"monster attack !"<<endl;
        }
};

////////////////////////////////////////////////////////



template <class math>   /// this is function template

math addCrap(math a, math b) // it can take any type of data as input parameter.
{
    return a+b;
}

/////////////////////////////////////////////////////////

template <class func1 , class func2>

func1 smaller(func1 a , func2 b)
{
    return (a<b?a:b);
}

////////////////////////////////////////////////////////

int main()
{
        Ninja n;
        Monster m;
        Enemy *enemy1 = &n;
        Enemy *enemy2 = &m;
        enemy1->attack();
        enemy2->attack();

////////////////////////////////////////////////////////

        double x=7.1 , y =43.3 , z ;
        z = addCrap(x,y);
        cout<<z<<endl;

////////////////////////////////////////////////////////

        int t =89;
        double f = 56.78;
        cout<<smaller(f,t)<<endl;
}
