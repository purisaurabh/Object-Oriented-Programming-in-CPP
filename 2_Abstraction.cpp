#include <bits/stdc++.h>
using namespace std;

class abt
{
    private:
        int a , b;

    public:
        void set_data(int x, int y)
        {
            a = x;
            b = y;
        }

        void display()
        {
            cout << "value of a is : " << a << endl;
            cout << "Value of b is : " << b << endl;
        }

};

int main()
{
    abt q;
    q.set_data(1,2);
    q.display();
}