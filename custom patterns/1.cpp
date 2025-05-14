#include<iostream>
using namespace std;
int main(){

    int user;
    do
    {
        cout<<"Enter the number of pattern which you want to print : ";
        cin >> user;
        switch (user)
        {
        case 0:
                cout<<".........GOOD BYE.........."<<endl;
        break;
        case 1:
                for (int i = 1; i <=5 ; i++)
                {
                    for (int j = 1; j <=i; j++)
                    {
                        cout<<"* ";
                    }
                  cout<<endl;  
                }           
            break;
        case 2:
                for (int i = 1; i <=5; i++)
                {
                    for (int s = 4; s >= i; s--)
                    {
                        cout<<"  ";
                    }
                    
                    for (int j = i; j >=1; j--)
                    {
                        cout<<"* ";
                    }
                cout<<endl;  
                }
                
        break;
        case 3:
        for (int i = 1; i <=5; i++)
        {
            for (int s = 4; s >= i; s--)
            {
                cout<<"  ";
            }
            
            for (int j = i; j >=1; j--)
            {
                cout<<"*   ";
            }
        cout<<endl;  
        }
        break;

        case 4:

            for (int i = 5; i >=1; i--)
            {
                for (int s= i; s <= 5; s++)
                {
                    cout<<"  ";
                }
                
                for (int j = i; j >= 1; j--)
                {
                   cout<<"* " ;
                }
              cout<<endl;  
            }
            
        break;
        case 5:

            for (int i = 1; i <=5; i++)
            {
                for (int j = i; j <=5; j++)
                {
                   cout<<"* ";
                }
              cout<<endl;  
            }           
        break;
        case 6:

            for (int i = 5; i >= 1; i--)
            {
                for (int s = 5; s >= i; s--)
                {
                    cout<<"  ";
                }
                
                for (int j = i; j >= 1; j--)
                {
                 cout<<"*   ";   
                }
            cout<<endl; 
            }           
        break;

        case 7:

            for (int i = 1; i <=5; i++)
            {
                for (int s = 2; s <=i ; s++)
                {
                    cout<<" ";
                }
                
                for (int j = 1; j <=4; j++)
                {
                   cout<<"*  ";
                }
            cout<<endl;  
            }
            
        break;
        case 8:
            for (int i = 1; i <=4; i++)
            {
                for (int s = i; s <=4; s++)
                {
                    cout<<"  ";
                }
                
                for (int j = i; j >= 1; j--)
                {
                    cout<<"*   ";
                }
            cout<<endl;  
            }
            for (int i = 1; i <=3; i++)
            {
                for (int s = 1; s <=i+1; s++)
                {
                    cout<<"  ";
                }
                
                for (int j = i; j <= 3; j++)
                {
                    cout<<"*   ";
                }
            cout<<endl;  
            }            
        break;
            
        case 9:
            for (int i = 4; i >= 1; i--)
            {
                for (int s = 4; s >=i; s--)
                {
                    cout<<"  ";
                }
                
                for (int j = i; j >= 1; j--)
                {
                    cout<<"*   ";
                }
            cout<<endl;   
            }
            for (int i = 2; i <= 4; i++)
            {
                for (int s = 4; s >=i; s--)
                {
                    cout<<"  ";
                }
                
                for (int j = i; j >= 1; j--)
                {
                    cout<<"*   ";
                }
            cout<<endl;   
            }
            
        break;
        case 10:

            for (int i = 1; i <=5; i++)
            {
                for (int j = 1; j <=5; j++)
                {
                    if (i==1 || i==5 || j==1 || j==5)
                    {
                        cout<<"* ";
                    }
                    else{
                        cout<<"  ";
                    }                   
                }
             cout<<endl;   
            }
            
        break;

        case 11:
            for (int i = 1; i <=5; i++)
            {
                for (int s = i; s <=5; s++)
                {
                    cout<<"  ";
                }
                for (int j = i; j >=1; j--)
                {
                    if ()
                    {

                    }
                    else{
                        
                    }                   
                }
            cout<<endl;  
            }
            
        break;
                
        default:
            cout<<"Invalid number, Please enter the valid number!"<<endl;
            break;
        }
    } while (user != 0);
    
}