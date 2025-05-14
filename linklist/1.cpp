#include<iostream>
using namespace std;

    struct node{

        int data;
        node* next;

    };
    
int main(){
     
     node *head = new node();
     head -> data = 10;

     node *node1 = new node();
     node1 -> data = 20;

     head -> next = node1;

     node *node2 = new node();
     node2 -> data = 30;

     node1 -> next = node1;
     node2 -> next = NULL;

     cout<< head -> data <<" -> "<< head -> next <<endl;
     cout<< node1 -> data <<" -> "<< node1 -> next <<endl;
     cout<< node2 -> data <<" -> "<< node2 -> next <<endl;


}