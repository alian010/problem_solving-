#include<bits/stdc++.h>
using namespace std;
struct alian{
    int data;
    struct alian *next;

};

int main ()
{
    struct alian *s1,*s2,*s3,*s4,*temp;
    s1= (struct alian *)malloc(sizeof(struct alian));
    s2=(struct alian *) malloc(sizeof(struct alian));
    s3= (struct alian *) malloc(sizeof(struct alian));
    s4= (struct alian *)malloc(sizeof(struct alian));

    s1->data=3;
    s2->data=10;
    s3->data=15;
    s4->data=20;

    s1->next=s2;
    s2->next=s3;
    s3->next=s4;
    s4->next=NULL;
    temp=s1;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
 return 0;

}
