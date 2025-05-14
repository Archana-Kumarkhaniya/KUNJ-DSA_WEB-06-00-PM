#include<iostream>
using namespace std;

class superhero{

    public:

    void fly(){
        cout<<"I can fly"<<endl;
    }

    void savetheworld(){
        cout<<"Ironman save the world"<<endl;
    }
 };

class ironman : public superhero{

    public:

    void laser(){
        cout<<"I can shoot laser"<<endl;
    }

};
int main(){

    ironman obj1;

        obj1.fly();
        obj1.savetheworld();

}