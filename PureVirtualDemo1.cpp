#include<iostream>
using namespace std;

class Base
{
    public: 
        int i , j;
        int Addition(int a, int b)      //concreate
        {
            return a +b;
        }
        virtual int Substraction(int a, int b) = 0;       //Abstract

       
};
class Derived : public Base             //ERROR
{
    public:
        int X;

};

int main()
{

    Base *bp = new Derived();         // UpCasting

    return 0;
}