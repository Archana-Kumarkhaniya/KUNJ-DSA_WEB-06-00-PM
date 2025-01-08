#include<iostream>
using namespace std;
int main(){
    //Create an integer array and an array of pointers pointing to each element.
    //Output the values of the array through the pointers.


    int size;
    cout<<"Enter the size of array :";
    cin >> size;
    int a[size];
    int *p[size];

    for (int i = 0; i < size; i++)
    {
        cout<<"a["<< i <<"] = ";
        cin>> a[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        p[i] = &a[i];
        cout<<"value is"<< *p[i]<<" ";
    }
    cout<<endl;
    
}