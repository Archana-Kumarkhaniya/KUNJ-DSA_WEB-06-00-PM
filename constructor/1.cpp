#include<iostream>
using namespace std;

class a
{
private:

    int j,k;

public:

    a(int x,int y)
    {
        j=x;
        k=y;
    }

    a(a &ref)
    {
        j = ref.j;
        k = ref.k;
    }

    void show()
    {
        cout << j << endl;
        cout << k << endl;
    }

};

int main()
{
    a obj(10,20);
    a obj2 = obj;
    obj2.show();
}