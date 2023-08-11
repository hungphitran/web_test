#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

node makenode(int a)
{
    node o;
    o.data=a;
    o.next=NULL;
    return o;
}

node* addback(node*a,int m)
{
    node* o=new node(makenode(m));
    node* b=a;
    while(b->next!=NULL)
    {
        b=b->next;
    }
    b->next=o;
    return a;
}

node* addpos(node* &a,int x,int pos)
{
    node* o=new node(makenode(x));

    if(pos==0)
    {
        o->next=a;
        a=o;
        return a;
    }

    int i=0;
    node* b=a;
    while(i<pos-1)
    {
        b=b->next;
        i++;
    }
    (*o).next=b->next;
    b->next=o;

    return a;
}

int main()
{
    int n,pos,x;
    cin>>n;
    int o;
    cin>>o;
    node* a= new node(makenode(o));
    for(int i=1;i<n;i++)
    {
        int c;
        cin>>c;
        addback(a,c);
    }
    cin>>pos>>x;
    addpos(a,x,pos);

    node*b=a;
    while(b->next!=NULL)
    {
        cout<<b->data<<" ";
        b=b->next;
    }
    cout<<b->data;

    delete a;
    return 0;
}