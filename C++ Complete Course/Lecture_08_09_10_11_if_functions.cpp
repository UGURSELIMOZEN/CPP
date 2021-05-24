#include <iostream>
using namespace std;
void Myfunc();
float DivideNumbers(float,float);



int AddNumbers (int x ,int y)
{
    int result = x+y;
    return result ;
}



int main()
{
    cout<<AddNumbers(12,21)<<endl;
    cout<<DivideNumbers(8,5)<<endl;
    Myfunc();

    int x = 13 ;
    float y = 5.4 ;

    if (x>y)
    {
        cout << "X is greater than Y ! " <<endl ;
    }

    if(3==3){cout <<"You are right man !" <<endl ;}
    if (5!=23){cout<<"That's true man !!!"<<endl;}

    return 0;
}



void Myfunc()
{
    cout<<"That's my function ! "<<endl ;
}



float DivideNumbers (float a ,float b)
{
    float answer = a/b;
    return answer ;
}
