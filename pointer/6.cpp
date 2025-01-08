#include<iostream>
using namespace std;
int main(){

    //Create a reference variable for an integer and modify its value through the reference.

    int num=10;
    int &ref=num;

    cout<< "Num : " << num <<endl;
    cout<< "ref : " << ref<<endl;

    ref=20;
    
    cout<< "Num : " << num <<endl;
    cout<< "ref : " << ref<<endl;



}