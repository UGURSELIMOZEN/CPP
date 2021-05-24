#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a;
    float p = 10000;
    float r = 0.01; // it is same with r = .01;

    for (int day =1; day<=20 ; day++)
    {
        a = p*pow(1+r,day);
        cout<<day<<"------"<<a<<endl;
    }

//////////////////////////////////////////////////////

    for(int x=1 ; x<10 ; x++)
    {
        cout<<x<<endl;
    }

    for (int a=3 ; a<=21 ; a +=3)
    {
        cout<<a<<endl;
    }

/////////////////////////////////////////////////////

    int x = 5;
    x +=12 ;
    cout<<++x<<endl; // adds immediately 1 to x before the printing operation -> 18
    cout <<x++<<endl; //adds 1 to x after the printing operation -> 18
    cout <<x<<endl; // printed -> 19

/////////////////////////////////////////////////////

    int age ;
    int ageTotal = 0 ;
    int numberOfPeopleEntered = 0 ;

    cout <<"Enter first persons age or -1 to quit" <<endl;
    cin >>age;

    while(age !=-1)
    {
        ageTotal = ageTotal +age ;
        numberOfPeopleEntered++ ;

        cout<<"Enter next persons age or -1 to quit" <<endl ;
        cin>>age;
    }
    cout<< "Number of people entered : "<<numberOfPeopleEntered<<endl;
    cout<< "Average age : "<<ageTotal/numberOfPeopleEntered<<endl;

    return 0;
}
