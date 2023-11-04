#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head;


void creat(int a[5],int n)
{
    struct Node *t,*last;
    head = new Node;
    head->data = a[0];
    head->next = head;
    last = head;
    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data = a[i];
        t->next=head;
        last->next=t;
        last = t;
    }

}

void display(Node *p)
{
    do
    {   
        cout<<p->data<<" ";
        p=p->next;
    } while (p!=head);
    
}

int Length(struct Node *p)
{
    int len=0;
    do
    {
        len++;
        p=p->next;
    } while(p!=head);
    return len;
}

void insert(struct Node *p,int index,int x)
{
    struct Node *t;
    if(index<0 || index>Length(p))
        return;
    if(index==0)
    {
        t=new Node;
        t->data = x;
        if(head==NULL)
        {
            head = t;
            head->next = head;
        }
        else{
            while(p->next!=head)
                p = p->next;
            t->next = head;
            p->next = t;
            head = t;
        }
    }
    else{
        t=new Node;
        t->data = x;
        for(int i=0;i<index-1;i++)
            p=p->next;
        t->next = p->next;
        p->next = t; 
        
    }
}

int deleteNode(struct Node *p,int index)
{
    int x;
    struct Node *q;
    if(index<0 || index>Length(head))
        return -1;
    if(index==1)
    {
        while(p->next!=head) 
            p=p->next;
        x=head->data;
        if(head==p)
        {
            free(head);
            head=NULL;
        }
        else
        {
            p->next=head->next;
            free(head);
            head = p->next;
        }
    }
    else
    {
        for (int i = 0;i<index-2; i++)
            p=p->next;
        q = p->next;
        p->next = q->next;
        x=q->data;
        free(q);        
    }
}



int main()
{
        int arr[]={1,2,3,4,5};
        int n = sizeof(arr)/sizeof(int);
        creat(arr,n);
        deleteNode(head,3);
        display(head);
        return 0;

}