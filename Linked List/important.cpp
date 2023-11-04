#include <iostream>
 
using namespace std;
 
class Node{
public:
int data;
Node * next;
}*first=NULL;
 
void create(int a[5],int n)
{
    int i;
    first=new Node;
    Node *t,*last;
    first->data=a[0];
    first->next=NULL;
    last=first;
 
    for(i=1;i<n;i++)
    {
        t=new Node;
         t->data=a[i];
         t->next=NULL;
        last->next=t;
        last=t;
    }
}
 
void insert(int x){
 
    Node *last;
    Node *t=new Node;
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
        first=last=t;
    }
    else
    {
        last=first;
    while(last->next!=NULL) //mistake in condition
    {
        last=last->next;
    }
    last->next=t;
    last=t;
    }
}
 
void display(Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<"->"<<flush;
        p=p->next;
    }
}
 
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr);
    create(arr,5); // directly give size 5

    display(first);
    return 0;
}