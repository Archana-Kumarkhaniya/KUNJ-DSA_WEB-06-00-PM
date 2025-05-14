#include <iostream>
using namespace std;

class superhero
{
    public: 

    void fly()
    {
        cout << "It Can Fly..." << endl;
    }
};

class Ironman : public superhero
{
    void laser()
    {
        cout<<"I can shoot laser"<<endl;
    }


};
class superman : public superhero
{
    void sup()
    {
        cout<<"Superman...."<<endl;
    }
};
class bothaccess : public Ironman , public superman
{
    void both()
    {
        cout<<"Child class..."<<endl;
    }


};

int main()
{
    bothaccess obj;

    obj.Ironman::fly();
}