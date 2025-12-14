#include<iostream>
using namespace std;

int main()
{
    int length = 0;
    int *Arr = NULL;

    cout<<"Enter the number of elements :\n";
    cin>>length;

    // Step1 Allocte the memory
    Arr = new int[length];

    if(Arr== NULL)
    {
        cout<<"Uanable allocate the memory:\n";
    }
    else
    {
        cout<<"Memory gets Succsesfully allocate :\n";
    }

    //step 2 : use the memory

    //Step 3 : deallocate the memory

    delete []Arr;


    return 0;
}