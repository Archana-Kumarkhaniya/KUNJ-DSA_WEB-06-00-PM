#include <iostream>
using namespace std;
int main(){

    //Create a simple linked list using dynamically allocated memory.

    int a;
    cout<<"Enter the value of a : ";
    cin >> a;

    int *p1= &a;
    int **p2= &p1;
    int ***p3= &p2;
    int ****p4= &p3;
    int *****p5= &p4;

    cout<<"Chain of pointer : "<< *****p5;

}