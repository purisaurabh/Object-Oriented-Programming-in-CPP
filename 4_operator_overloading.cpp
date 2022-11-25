#include <bits/stdc++.h>
using namespace std;


class Complex
{
    private:    
        int real;
        int imag;
    
    public:

        Complex(int r = 0 , int i = 0)
        {
            real = r;
            imag = i;
        }

        // This is automatically called when + is used with between two complex objects

        Complex operator+(Complex const& obj)
        {
            Complex res;
            res.real  = real + obj.real;
            res.imag = imag + obj.imag;
        }

        void print()
        {
            cout << "Real " <<  "+ i" << imag << endl;
        }
};

int main()
{
    Complex c1(10 , 5) , c2(2 , 4);
    Complex c3 = c1 + c2;
    c3.print();
}