#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node taomoi(int x)
{
    Node y;
    y.data=x;
    y.next=NULL;
    return y;
}

Node* themphantu(Node *a,int x)
{
    Node* y=new Node(taomoi(x));
    Node*b=a;
    while(b->next!=NULL)
    {
        b=b->next;
    }
    b->next=y;
    return a;
}

int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    Node* a=new Node(taomoi(x));
    for (int i=1;i<n;i++)
    {
        int c;
        cin>>c;
        themphantu(a,c);
    }
    Node* b=a;
    while(b->next!=NULL)
    {
       cout<<b->data<<" ";
        b=b->next;
    }
    cout<<b->data;
    delete a;
    return 0;

}