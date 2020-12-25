#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
int main()
{
    int n,m,i;
    while(cin>>n>>m&&n)
	{
    node *first;
    node *p,*q;
    first = new node;
    first->data = 1;
    first->next = first;
    if(m!=1)
	{
    for(i=n;i>=2;i--){
        p=new node;
        p->data = i;
        p->next=first->next;
        first->next=p;
    }
    q = first;
    while(q->next!=q)
	{
        n=m-2;
        while(n--)
		{
            q=q->next;
        }
        p=q->next;
        q->next=p->next;
        delete p;
        q=q->next;
    }
    cout<<q->data<<endl;
    }
    else
        cout<<n<<endl;
    while(first->next!=first){
        q=first;
        first=first->next;
        delete q;
    }
    delete first;
    }
}