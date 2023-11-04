#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
int data;
struct Node * next;
}*head=NULL,*second=NULL,*third=NULL,*tail=NULL;


void insert(int new_data) {
  
   struct Node* temp = new Node;
   temp->data = new_data;
   temp->next=NULL;
   if(head == NULL)
   {
        head = temp;
        tail = temp;
   }

   else
   {
    tail->next = temp;
    tail = temp;
   }
}
 
 void display(Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}



int main() {
    // struct Node *t1,*t2;
    // int arr[5]={10,20,40,50,60};
    // int n=sizeof(arr)/sizeof(int);
    
    insert(1);
    insert(2);
    insert(3);
    display(head);
   return 0;
}