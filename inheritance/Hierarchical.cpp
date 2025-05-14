#include <iostream>
using namespace std;


class superhero // parent class
{
    public: 
    
    void flying()
    {
        cout << "It Can Fly !" << endl;
    }
};

class Ironman : public superhero // Child Class
{
    public: 

    void mf()
    {
        cout << "I can create and manipulate magnetic fields." << endl;
    }
};

class Superman : public superhero // Child Class
{
    public: 

    void hv()
    {
        cout << "I can shoot beams of intense heat from his eyes." << endl;
    }
};

class Batman : public superhero // Child Class
{
    public: 

    void es()
    {
        cout << "Batman has enhanced strength." << endl;    
    }
};

int main()
{
    Ironman obji;
    Superman objs;
    Batman objb;

    obji.mf();
    objs.hv();
    objb.es();

    
}