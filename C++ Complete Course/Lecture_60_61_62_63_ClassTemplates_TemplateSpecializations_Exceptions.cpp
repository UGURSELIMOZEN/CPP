#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////

template <class T>
class Bucky{
    T first ,second ;
    public:
        Bucky(T a , T b)
        {
            first  =a;
            second =b;
        }
        T bigger();

};

template <class T>
T Bucky<T>::bigger()
{
    return (first>second?first:second);
}

/////////////////////////////////////////////////////////

template <class T>
class Spunky
{
    public:
        Spunky(T x)
        {
            cout<<x<<" is not a character !"<<endl;
        }
};

template <>
class Spunky<char>
{
    public:
        Spunky(char x)
        {
           cout<<x<<" is indeed a character !"<<endl;
        }
};

//////////////////////////////////////////////////////////

int main()
{
    Bucky<int> bo(231 ,105);
    cout<<bo.bigger();
    cout<<endl;

//////////////////////////////////////////////////////////

    Spunky<int>obj1(7);
    Spunky<double>obj2(3.154);
    Spunky<char>obj3('q');

/////////////////////////////////////////////////////////
    try
    {
        int momAge =30;
        int sonAge =34;

        if(sonAge > momAge)
        {
            throw 99;
        }
    }
    catch(int x)
    {
        cout<<"Son can not be older than mom, ERROR NUMBER: "<<x<<endl;
    }

////////////////////////////////////////////////////////////

    try
    {
        int num1;
        cout<<"Enter first number : ";
        cin>>num1;

        int num2;
        cout<<"Enter second number : ";
        cin>>num2;

        if (num2==0)
        {
            throw 0;
        }

        cout<<"The result is : "<<num1/num2<<endl;

    }
    catch(int x)
    {
        cout <<"You can not divide by "<<x<<endl;
    }

/////////////////////////////////////////////////////////////

}
