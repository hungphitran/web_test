#include <iostream>

using namespace std;

struct node
{
    int data;
    node* next;
};

node* makenode(int x)
{
    node* p=new node;
    p->data=x;
    p->next=p;
    return p;
}

node* addnode(node* a,int x)
{
    node*p=a;
    while (p->next!=a)
    {
        p=p->next;
    }
    node*o=new node;
    o->data=x;
    o->next=a;
    p->next=o;
    return a;
}

void displayfrompos(node* a,int pos)
{
    node* p1=a;
    node* p2;
    for(int i=0;i<pos;i++)
    {
        p1=p1->next;
    }
    p2=p1;
    while(p2->next!=p1)
    {
        cout<<p2->data<<" ";
        p2=p2->next;
    }
    cout<<p2->data;
}


int main()
{
    int n,k,x;
    cin>>n;
    cin>>x;
    node*a=makenode(x);
    for(int i=1;i<n;i++)
    {
        cin>>x;
        a=addnode(a,x);
    }
    int pos;
    cin>>pos;
    displayfrompos(a,pos);
    delete a;
    return 0;
}