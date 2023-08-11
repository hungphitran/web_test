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

doublelist* deletenode(doublelist* l,int pos )
{
    if(pos==0)
    {
        l->head=l->head->next;
        return l;
    }
    int i=0;
    node* p=l->head;
    while(p->next!=NULL)
    {
        if(i==pos)
        {
            p=p->pre;
            p->next->next->pre=p;
            p->next=p->next->next;
            return l;
        }
        else
        {
            p=p->next;
        }
        i++;
    }
    p=p->pre;
    l->tail=l->tail->pre;
    l->tail->next=NULL;
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
        addtail(l,a);
    }
    int pos;
    cin>>pos;
    deletenode(l,pos);
    node*p=l->head;
    while (p->next!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<p->data;
    delete l;
    return 0;
}