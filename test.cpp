#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data ;
    node *next;

};
int main()
{
    struct node *head=NULL,*newNode,*ptr;
    int n ;
    cout <<"number of nude to create"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        newNode=(node *)malloc(sizeof(node));
        newNode->data=i;
        newNode->next=NULL;

        if (head==NULL)
        {
            head =ptr=newNode;
        }
        else
        {
            ptr->next=newNode;
            ptr=newNode;
        }
    }
    ptr=head;
    int count=0;
    int loc=0,item=5;
    while(ptr!=NULL)
    {
        count++;
        if (ptr->data==item)
        {
            loc=count;
            break;
        }
        ptr=ptr->next;
    }
    if (loc==0)
    {
        cout<<"not in the list ";
    }
    else
    {
        cout <<"item in the list ";
    }
}
