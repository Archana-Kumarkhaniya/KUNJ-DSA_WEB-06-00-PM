#include <iostream>
using namespace std;

    //Create functions to print and calculate the sum of an array using pointers.

    int sum(int a[], int *p[],int size){

        int sum = 0;
        cout<<"The value is : "<<" ";
        for (int i = 0; i < size; i++)
        {
            p[i] = &a[i];
            cout<< *p[i];
            sum += *p[i];
        }
        cout<<endl;
        cout << "The sum of an array : " << sum;
        
                  
    }

int main(){

    int size;
    cout<<"Enter the size of array : ";
    cin >> size;
    int a[size];
    int *p[size];

    for (int i = 0; i < size; i++)
    {
        cout<<"a[" << i << "] = ";
        cin>> a[i];
    }

    sum(a,p,size);


}