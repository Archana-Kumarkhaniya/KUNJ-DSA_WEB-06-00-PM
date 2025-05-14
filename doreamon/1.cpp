#include<iostream>
using namespace std;

class gadget{

    private:
    int usecount = 0;

    public:
    string name;
    
    int powerlevel;

    void display(string a, int b){

        name=a;
        powerlevel=b;

        cout<<"Gadget name : "<< name <<"    "<<"Powerlevel : "<<powerlevel<<endl;

    }

    void update()
    {
        usecount ++;

        if (usecount > 10)
        {
            cout << "You are overusing gadgets !" << endl;
        }
        
    }

};

int main()
{
    int use;
    gadget nobita,doreamon;

    nobita.display("Anywhere door", 20);
    nobita.display("Bamboo Copter", 30);
    nobita.display("Time Machine", 50);
    nobita.display("Big light", 70);
    nobita.display("4D Pocket", 90);

    cout<<"Enter the value : ";
    cin >> use;

    for (int i = 1; i <= use; i++)
    {
        cout << "using gadget for " << i << " Time" << endl;

        doreamon.update();
    }
        
}

