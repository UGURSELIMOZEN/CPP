#include <iostream>
using namespace std;

void passByValue(int q);
void passByReferance(int *q);

int main()
{
    int sally[2][3] = {{2,3,4},{8,9,10}};
    cout << sally[0][0]<<endl<<endl; // gives us 2.

////////////////////////////////////////////////////

    int bertha [2][3] = {{1,2,3},{4,5,6}};

    for(int row=0 ; row<2 ; row++)
    {
        for(int column=0 ; column<3 ; column++)
        {
            cout<<bertha[row][column]<<" "; /// that's how to print out multidimensional array correctly and orderly.
        }
        cout<<endl;
    }
    cout<<endl;

///////////////////////////////////////////////////////

    int fish = 5;
    cout <<"The memory address of fish variable is : "<<&fish<<endl;

    int *fishPointer ;
    fishPointer = &fish;

    cout << "The memory address of fishPointer pointer variable is : "<<fishPointer << endl;

//////////////////////////////////////////////////////////

    int betty = 13;
    int sandy = 13;
    passByValue(betty);
    passByReferance(&sandy);

    cout<<"\nBetty is now : "<<betty<<endl;
    cout<<"Sandy is now : "<<sandy<<endl;


    return 0;
}

void passByValue(int q)
{
    q =99;
}

void passByReferance(int *q)
{
    *q =66;
}
