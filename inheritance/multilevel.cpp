#include<iostream>
using namespace std;

class superhero
{
    public:

    void sup()
    {
        cout<<"superhero..."<< endl;
    }
};
class FightingHero : public superhero
{
    public:

    void fghthro()
    {
        cout<<"FightingHero..."<< endl;
    }
};
class Batman : public FightingHero
{
    public:

    void btmn()
    {
        cout<<"c"<< endl;
    }
};

int main(){
    Batman obj;

    obj.sup();
}