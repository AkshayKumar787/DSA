#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    struct Node *prev;
    int data;
    struct Node *next;
}*head;



void creat(int a[],int n)
{
    struct Node *t,*last;
    head=new Node;
    head->data = a[0];
    head->prev = head->next = NULL;
    last=head;

    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data = a[i];
        t->next = NULL;
        t->prev = last;
        last->next = t;
        last=t;
    }
}

void display(struct Node *p)
{    
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int Length(struct Node *p)
{
    int len=0;
    while(p)
    {
        len++;
        p=p->next;
    }
    return len;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    creat(arr,n);
    display(head);
    return 0;
}