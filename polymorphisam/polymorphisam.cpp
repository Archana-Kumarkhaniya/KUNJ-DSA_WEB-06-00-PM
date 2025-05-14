#include<iostream>
using namespace std;

class poly{
    public:
    float add(float x,float y){
        cout<<"Sum is : "<<x+y<<endl;
    }

    int add(int x,int y){
        cout<<"Multiplication is : "<< x*y<<endl;
    }

};
int main(){
    poly obj1;
    obj1.add(5,10);
    obj1.add(3.5f,8.6f);
}