#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream robertsFile ;
    robertsFile.open("tuna.txt"); // it creates file if does not exist and then open it.

    robertsFile<< "I love tuna and tuna loves me ! \n";
    robertsFile.close();

/////////////////////////////////////////////////////////////

    ofstream buckysFile("bruuh.txt");

    if(buckysFile.is_open())
    {
        cout<<"OK , the file is open"<<endl;
    }
    else
    {
        cout<<"NO ,you are messed up"<<endl;
    }
    buckysFile <<"I love the milk ! \n";
    buckysFile.close();

/////////////////////////////////////////////////////////////

    ofstream theFile("players.txt");
    cout<<"Enter players ID ,Name , and Money"<<endl;
    cout<<"press Ctrl+Z to quit\n"<<endl;

    int idNumber;
    string name;
    double money;

    while(cin>>idNumber>>name>>money)
    {
        theFile<<idNumber<<' '<<name<<' '<<money<<endl;
    }

/////////////////////////////////////////////////////////////

    ifstream theFile("players.txt");
    int id;
    string name;
    double money;

    while(theFile>>id>>name>>money)
    {
        cout<<id<<", "<<name<<", "<<money<<endl;
    }

/////////////////////////////////////////////////////////////

}
