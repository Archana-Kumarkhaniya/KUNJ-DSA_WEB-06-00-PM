#include<iostream>
using namespace std;

class flyinghero{
     
     public:
     void fly(){
        cout<<"I can Fly"<<endl;
     }

};

class fightinghero{
    public:

    void fight(){

        cout<<"I can Fight"<<endl;
    }
};

class ironman : public flyinghero , public fightinghero {
    public:
    void laser(){

        cout<<"I can Shoot laser"<<endl;
    }
};
class superman : public flyinghero , public fightinghero{
    public:
    void heat(){
        cout<<"It has heat vision"<<endl;
    }

};
int main(){

    ironman obj1;
    superman obj2;

    obj1.fly();
    obj1.laser();

    cout<<"---------------------------------"<<endl;

    obj2.fly();
    obj2.heat();



}