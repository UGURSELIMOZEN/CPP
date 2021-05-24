#include <iostream>
using namespace std;

void printArray(int theArray[], int sizeOfArray) ;

int main()
{

    int bucky[5] = {2,3,45,7,9};
    cout <<bucky[1]<<endl; // this is second element of array.

//////////////////////////////////////////////////////////

    int myArray[9];
    cout << "\nElement -  Value" <<endl;

    for(int x=0 ; x<=8 ; x++)
    {
        myArray[x]=99;
        cout << x <<"-----------" <<myArray[x]<<endl;
    }

///////////////////////////////////////////////////////

    int tuna[5] = {12,45,67,87,90};
    int sum = 0;

    for (int a=0 ; a<=4 ; a++)
    {
        sum = sum + tuna[a];
        cout<<sum<<endl;
    }
    cout<<"Total sum of array is : "<<sum<<endl;

//////////////////////////////////////////////////////

    int arr1[3] = {12 ,34 ,65};
    int arr2[6] = {2 ,67 ,5 ,23 ,88 ,9};

    cout<<endl;
    printArray(arr1 ,3);
    cout<<endl;
    printArray(arr2 ,6);

    return 0;
}

void printArray(int theArray[], int sizeOfArray)
{
    for(int r=0; r<=sizeOfArray-1 ; r++)
    {
        cout <<theArray[r]<<endl;
    }
}
