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
   temp->next = NULL;
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
 
void create(int a[5],int n)
{
    int i;
    head=new Node;
    Node *t,*last;
    head->data=a[0];
    head->next=NULL;
    last=head;
 
    for(i=1;i<n;i++)
    {
        t=new Node;
         t->data=a[i];
         t->next=NULL;
        last->next=t;
        last=t;
    }
}

void create2(int arr[5],int n)
{
    int i;
    second=new Node;
    Node *t,*last;
    second->data=arr[0];
    second->next=NULL;
    last=second;
 
    for(i=1;i<n;i++)
    {
        t=new Node;
         t->data=arr[i];
         t->next=NULL;
        last->next=t;
        last=t;
    }
}

                                                            //Display
void display(Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}



                                                            //Recursive display
void Rdisplay(struct Node* p)
{
    
    while(p!=NULL)
    {
        Rdisplay(p->next);
        cout<<p->data<<" ";
        //If the above two statements inchange then linkedlist will printed reversly.
        break;
    }
}




                                                            //Count
int count(struct Node* p)
{
    int count = 0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;//If I try to use return statement it is not working otherwise it is perfect.Need to know the answer.
}




                                                            //Sum
int sum(struct Node* p)
{
    int sum=0;
    while(p!=NULL)
    {
        sum+=p->data;
        p = p->next;
    }
    cout<<sum;
}

                                                            //Maximum element 
int max(Node* p)
{
    int max = INT_MIN;
    while(max<p->data)
    {
        max = p->data;
        p = p->next;
    }
   return max;
}


                                                            // Insert


void Insert(struct Node *p, int index, int x)
{
    Node* t;
    if(index<0 || index>count(p))
        return ;
    t = new Node;
    t->data = x;
    if(index == 0)
    {
        t->next = head;
        head = t;
    }
    else{
        for(int i=0;i<index-1;i++)
            p=p->next;
        t->next =p->next;
        p->next = t; 
    }
}

                                                            // InsertSortedOrder


void InsertSortedOrder(Node* p, int x)
{ 
    Node *t = new Node;
    Node *q  =nullptr;
    t->data = x;
    t->next = nullptr;
    if(head = NULL)
    {
        head =t;
    }
    else
    {
        while (p && p->data<x)
        {
            q=p;
            p = p->next;
        }
        if(p == head)
        {
            t->next=head;
            head=t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}



                                                                //Delete

int Delete(struct Node* p,int index)
{
    Node* q;int x;
    if(index<1 || index > count(p))
        return -1;
    if(index == 1)
    {
        x=p->data;
        p = head;
        head = head->next;
        delete p;
    } 
    else{
        for(int i=0;i<index-1 && p;i++)
        {
            q=p;
            p=p->next;
        }
        if(p)
        {
            q->next = p->next;
            x = p->data;
            delete p;
        }
        return x;

    }
}


                                                        // checkSortedOrder


int checkSortedOrder(Node* p)
{
    int x = INT_MIN;
    while(p!=nullptr) 
    {
        if(p->data<x)
            return 0;
        x = p->data;
        p=p->next;
    }
    return 1;
}


                                                            // remove_Duplicates_sorted_LL    



void remove_Duplicates_sorted_LL(Node *p)
{
    Node *q = p->next;
    while(q!=NULL)
    {   
        if(p->data !=q->data)
        {
            p=q;
            q=q->next; 
        }
        else{
            p->next = q->next;
            delete q;
            q=p->next;
        }
        
    }
}


                                                            //Reverse
void Reverse(Node *p)
{
    Node *q = NULL,*r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p = p->next;
        q->next =r;
    }
    head = q;
}

void concat(Node *p,Node *q)
{
    third = p;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next = q;
    q=NULL;

}





                                                    // Merge
void Merge(Node *p,Node *q)
{
    Node *last;
    if(p->data < q->data)
    {
        third=last=p;
        p=p->next;
        third->next = NULL;
    }
    else
    {
        third=last=q;
        q=q->next;
        third->next = NULL;
    }
    while (p && q)
    {
        if(p->data < q->data)
        {
            last->next = p;
            last=p;
            p=p->next;
            last->next = NULL;
        }
        else{
            last->next = q;
            last=q;
            q=q->next;
            last->next = NULL;
        }


    }
    if(p)
        last->next = p;
    if(q)
        last->next = q;

}

int loop(struct Node *head)
{
    struct Node *p,*q;
    p=q=head;
    do
    {
        p=p->next;
        q=q->next;
        q=q ? q->next:q;
    } while (p && q && p!=q);

    if(p==q)
        return 1;
    else
        return 0;
    // in main function
    // struct Node *t1,*t2;
    // t1 = head->next->next;
    // t2 = head->next->next->next->next;
    // t2->next = t1;   

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