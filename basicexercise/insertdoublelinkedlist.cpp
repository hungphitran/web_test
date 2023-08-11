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

doublelist* addhead(doublelist* l,int x)
{
    node* p=new node(makenode(x));
    p->next=l->head;
    l->head->pre=p;
    l->head=p;
    return l;
}

doublelist* addtail(doublelist* l,int x)
{
    node* p=new node(makenode(x));
    p->pre=l->tail;
    l->tail->next=p;
    l->tail=p;
    return l;
}

doublelist* insert(doublelist* l,int pos,int x)
{
    if(pos==0)
    {
        addtail(l,x);
        return l;
    }
    int i=0;
    node* p=l->head;
    while(p->next!=NULL)
    {
        if(i==pos)
        {
            node* m=new node(makenode(x));
            m->next=p->next;
            m->pre=p;
            p->next->pre=m;
            p->next=m;
        }
        p=p->next;
        i++;
    }
    if(i==pos)
    {
        addhead(l,x);
    }
    if(i+1==pos)
    {
        addhead(l,x);
    }
    return l;
}

int main()
{
    int n;
    cin>>n;
    int a;
    cin>>a;
    doublelist* l=new doublelist();
    l->head=new node(makenode(a));
    l->tail=l->head;
    for(int i=1;i<n;i++)
    {
        cin>>a;
        addhead(l,a);
    }
    int pos,x;
    cin>>pos>>x;
    insert(l,pos,x);
    node*p=l->tail;
    while (p->pre!=NULL)
    {
        cout<<p->data<<" ";
        p=p->pre;
    }
    cout<<p->data;
    delete l;
    return 0;

    
}