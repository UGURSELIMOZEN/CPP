#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    for(int y=1; y<25; y++)
    {
        cout <<11+(rand()%5)<<endl; /// it gives us 11 plus of reminder of random numbers that divided by 5.
    }

///////////////////////////////////////////////////

    int age1 = 23 ;
    int money = 650 ;
    int money1 = 450 ;
    if (age1>21 && money>500) /// and operator
    {
        cout<<"You are allowed in to the club !!!"<<endl;
    }

    if (age1>21 || money1>500) /// or operator
    {
        cout<<"You are allowed in to the club !!!"<<endl;
    }

//////////////////////////////////////////////////

    int age=21;

    switch(age)
    {
        case 16:
            cout <<"Hey you can drive now!" <<endl ;
            break;
        case 18:
            cout <<"Go buy some lotto tickets!"<<endl;
            break;
        case 21 :
            cout<<"Buy me some beer!"<<endl ;
            break;
        default:
            cout<<"Sorry you got nothing !!!"<<endl;

    }

////////////////////////////////////////////////7

    int x =1;

    do{
       cout <<x<<endl;
       x-- ;
    }while(x>0);

    return 0;
}
