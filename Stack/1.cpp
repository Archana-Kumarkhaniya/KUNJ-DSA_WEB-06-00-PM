#include <iostream>
using namespace std;

class stack{

    private:

    int arr[7];
    int top;

    public:

    stack(){

        top = -1;
        for (int i = 0; i < 7; i++)
        {
            arr[i] = 0;
        }       
    }

    bool isfull(){

        if (top == 4)
        {
            return true;
        }
        else{
            return false;
        }
        
    }
    bool isempty(){

        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    void push(int value){

        if (isfull())
        {
            cout<<"Stack is overflow"<<endl;
        }
        else{
            top++;
            arr[top] = value;
            cout<<"Value pushed successfully"<<endl;

        }       
    }

    int pop(int value){

        if (isempty())
        {
            cout<<"Stack is underflow"<<endl;
        }
        else{

            int popvalue = arr[top];
            arr[top] =0;
            top--;
            cout<<"Value poped successfully"<<endl;

        }
        
    }
    
    void peek(){

        int peekval = arr[top];
        cout<< "Peeked value is : "<<peekval<<endl;
    }

    void display(){

        for (int i = 0; i < 7; i++)
        {
            cout<< arr[i] <<" ";
        }
        cout<<endl;       
    }


};

int main(){

    int user,value;
    stack obj1;

    
    do
    {
        cout<<"---------------------------------"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Peek"<<endl;
        //cout<<"4. Is Empty"<<endl;
       // cout<<"5. Is Full"<<endl;
        cout<<"4. Display elements"<<endl;
        cout<<"Enter the number : ";
        cin >> user;
        cout<<"-----------------------------------"<<endl;

        switch (user)
        {
        case 0:
                cout<<"............Exit............";
            break;

        case 1:

                cout<<"Enter the value you want to push : ";
                cin >> value;

                obj1.push(value);                
            break;

        case 2:
                obj1.pop(value);
            break;

        case 3:
                obj1.peek();
            break;
        // case 4:
        //         obj1.isempty();
        //     break;
        // case 5:
        //         obj1.isfull();
        //     break;
        case 4:
                obj1.display();
            break;
        default:
                cout<<"Enter the valid number!";
            break;
        }
    } while (user  != 0);
    

}