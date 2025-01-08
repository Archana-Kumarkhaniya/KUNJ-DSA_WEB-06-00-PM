#include<iostream>
using namespace std;
int main(){

    //Declare a pointer and point it to an integer variable.
    //Modify the value of the integer through the pointer and output the result.

    int a=5;
    int *ptr;

    ptr= &a;
    cout <<"Address is : "<<ptr<<endl;
    cout <<"value is : "<<*ptr<<endl;

    *ptr=10;

    cout<<"value is : "<<*ptr<<endl;


    

}