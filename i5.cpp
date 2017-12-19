#include<bits/stdc++.h>

using namespace std;

struct ListNode{
     int inf;

     ListNode *next;
};

int sum(ListNode* someList)
{
    int sum =0 ;

    while(someList->next != NULL)
    {
        sum+=someList->inf;
        someList=someList->next;
    }
    return sum+someList->inf;
}

int main()
{
    int n;
    ListNode *first,*last;
    first->inf=7;
    first->next=NULL;
    last=first;

    cin>>n;

    for(int i = 0 ; i < n ; i ++)
    {
        int x;
        ListNode*p = (ListNode*)malloc(sizeof(ListNode));
        cin>>x;
        p->inf=x;
        last->next=p;
        last=p;

    }
       last->next=NULL;
      ListNode*p=first;
    for(int i = 0 ; i <= n ; i ++)
    {
        cout<<p->inf<<" ";
        p=p->next;

    }
    cout<<"/n sum = "<<sum(first);



}
