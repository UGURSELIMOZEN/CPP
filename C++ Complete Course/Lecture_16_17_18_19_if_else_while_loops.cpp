#include <iostream>

using namespace std;

int main()
{
    int x = 10 ;
    int age = 24;
    int bacon = 0;

    int input ;
    int a = 0;
    int total =0;

    while(a <=5)
    {
        cin>>input ;
        total =total + input ;
        a++ ;
    }
    cout <<"Your total is :"<<total<<endl;

    while (bacon <=5)
    {
        cout<<"Bacon is : "<<bacon<<endl;
        bacon++;
    }

    if(age>60)
    {
        if(age>100)
        {
        cout<<"You are too old man!"<<endl;
        }

        cout<<"You are old people!"<<endl;
    }
    else {cout<<"You are young people!"<<endl;}

    if (x ==10){cout << "That's true man " << endl;}


    return 0;
}
