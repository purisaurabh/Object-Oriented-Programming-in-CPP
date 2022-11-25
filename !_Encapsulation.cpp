#include <bits/stdc++.h>
using namespace std;

class enc
{
    private:
        int x;

    public:
        void set_data(int a)
        {
            x = a;
        }

        int get_data()
        {
            return x;
        }

};

int main()
{
    enc e;
    e.set_data(5);
    cout << e.get_data() << endl;
}