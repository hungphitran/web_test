#include <iostream>

using namespace std;

struct node{
    int data;
    node* pre;
    node*  next;
};

struct doublelist{
    node* head;
    node* tail;
};

node makenode(int x)
{
    node o;
    o.data=x;
    o.pre=NULL;
    o.next=NULL;
    return o;
}

doublelist* addhead(doublelist* &l,int x)
{
    node* p=new node(makenode(x));
    p->next=l->head;
    l->head->pre=p;
    l->head=p;
    return l;
}

doublelist* addtail(doublelist* &l,int x)
{
    node* p=new node(makenode(x));
    p->pre=l->tail;
    l->tail->next=p;
    l->tail=p;
    return l;
}


int main()
{
    int n;
    cin>>n;
    doublelist* l=new doublelist();
    l->head=new node(makenode(1));
    l->tail=l->head;
    for(int i=2;i<=n;i++)
    {
        addhead(l,i);
        addtail(l,i);
    }

    while (l->head->next!=NULL)
    {
        cout<<l->head->data<<" ";
        l->head=l->head->next;
    }
    cout<<l->head->data;
    //delete l->head;
    delete l;
    return 0;

    
}