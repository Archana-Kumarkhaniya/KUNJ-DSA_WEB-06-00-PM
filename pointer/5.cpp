#include<iostream>
using namespace std;

//Implement functions that swap two values using Call by Value and Call by Reference.

int num(int a,int b){


    int temp=0;

    temp=a;
    a=b;
    b=temp;

    cout<<"After swapping call by value"<<endl;
    cout<< "a = "<< a << "   "<< "b = "<< b<<endl;
    
}
int num2(int &a,int &b){


    int temp=0;

    temp=a;
    a=b;
    b=temp;

    cout<<"After swapping call by reference"<<endl;
    cout<< "a = "<< a << "   "<< "b = "<< b<<endl;
    
}


int main(){

    int a,b;
    cout<<"Enter the first value : ";
    cin >> a;
    cout<<"Enter the second value : ";
    cin >> b;

    cout<<"Before swapping : "<<endl;
    cout << "a = " << a << "   " << "b = " << b<<endl;

    num(a,b);
    num2(a,b);



}