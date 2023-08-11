#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

node makenode(int x)
{
    node n;
    n.data=x;
    n.next=NULL;
    return n;
}

node* addnode(node* a,int x)
{
    node* p=new node(makenode(x));
    while(a->next!=NULL)
    {
        a=a->next;
    }
    a->next=p;
    return a;
}

node* replacenode(node* a,int x,int y)
{
    while(a->next!=NULL)
    {
        if(a->data==x) a->data=y;
        a=a->next;
    }
    if (a->data==x) a->data=y;
    return a;
}

int main()
{
    int num;
    cin>>num;
    int c;
    cin>>c;
    node* a=new node(makenode(c));
    for (int i=1;i<num;i++)
    {
        cin>>c;
        addnode(a,c);
    }
    int x,y;
    cin>>x>>y;
    replacenode(a,x,y);
    while(a->next!=NULL)
    {
        cout<<a->data<<" ";
        a=a->next;
    }
    cout<<a->data;
    delete a;
    return 0;
}