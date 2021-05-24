#include <iostream>
using namespace std;


void printNumber(int x){
    cout << "I am printing an integer " <<x<<endl;
}

void printNumber(float x){
    cout << "Now I am printing a float " <<x<<endl;
}

///////////////////////////////////////////////////

int tuna = 69;

int volume (int l=2 , int w=3 , int h=4);

///////////////////////////////////////////////////

int factorialFinder(int z)
{
    if (z==1)
    {
        return 1 ;
    }
    else
    {
        return z*factorialFinder(z-1);
    }
}

int main()
{

    cout<<factorialFinder(6)<<endl; // prints us factorial of 6 which is 720.

/////////////////////////////////////////////////

    int a = 54 ;
    float b = 32.3345 ;

    printNumber(a);
    printNumber(b);

////////////////////////////////////////////////

    double tuna =20; // does not matter it has int or double variable type.
    cout << ::tuna <<endl; //with that operator it uses the global tuna variable instead of inner tuna variable.
                        // without this operator it normally use the inner tuna variable instead of global tuna variable.

/////////////////////////////////////////////////

    cout <<volume(5); /// here 5 assigns to length.

    return 0;
}

/////////////////////////////////////

int volume(int l , int w , int h)
{
    return l*w*h;
}


void bucky(){
    cout << tuna <<endl;
}
