#include <bits/stdc++.h>
using namespace std;

class function_overloading
{
    public:

        void func(int x)
        {
            cout << "Tha value of x is : " << x << endl;
        }

        void func(double x)
        {
            cout << "The value of x is : " << x << endl;
        }

        void func(int x , int y)
        {
            cout << "The value of x is : " << x << " " << " and the value of y is : " << y << endl;
        }
};


int main()
{
    function_overloading fo;
    fo.func(7);
    fo.func(9.12);
    fo.func(1 , 2);
}