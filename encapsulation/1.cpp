#include<iostream>
using namespace std;

class bankaccount{

    private:

    int accountnum;
    string accholdername;
    int balance;

    public:

    bankaccount(int accnum,string acchname,int b){
       this->accountnum = accnum;
       this->accholdername = acchname;
       this->balance = b;
    }

    void deposit(){

        int n;
        cout<<"Enter amount for add in balance : ";
        cin >> n;
        this->balance += n;
        cout << accholdername <<", Your updated balance is "<< balance <<endl;
        cout <<"........................................."<< endl;

    }
    void display(){

        cout<<"-----------ACCOUNT DETAILS------------"<<endl;

        cout<<"Account Number : "<< accountnum <<endl;
        cout<<"Account Holder Name : "<< accholdername <<endl;
        cout<<"Account Balance : "<< balance <<endl;
        cout<<"--------------------------------"<<endl;
        
    }

    void withdraw(){
        int n;
        cout <<"Enter amount for withdraw : ";
        cin >> n;
        if (n <= balance)
        {
            balance -= n;
            cout<< accholdername<<", You have successfully withdrawn "<< n <<endl;
            cout<< "Now your updated balance is "<< balance <<endl;
            cout<< "---------------------------------"<< endl;
        }
        else{
            cout<< "Insufficient balance for withdrawal !"<<endl;
            cout<< "---------------------------------"<<endl;
        }        
    }

};

int main(){

    bankaccount jethalal(101,"Jethalal",6000);
    bankaccount popatlal(304,"Popatlal",3000);
    bankaccount bhide(300,"Bhide",15000);
    bankaccount daya(205,"Daya",8000);

    //for jethalal

    jethalal.display();
    jethalal.deposit();
    jethalal.withdraw();

    //for popatlal

    popatlal.display();
    popatlal.deposit();

    //for bhide
    
    bhide.display();
    bhide.deposit();
    bhide.withdraw();

    //for daya
    
    daya.display();
    daya.deposit();

}