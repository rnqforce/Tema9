#include<bits/stdc++.h>

using namespace std;

struct Nod{
     int inf;

     Nod *next;
};
void getNt(Nod *p,int index)
{
    for(int i = 0 ; i < index ; i ++)
    {
        p=p->next;
    }
    cout<<p->inf;
}

int main()
{
    int n;
    Nod *first,*last;
    first->inf=7;
    first->next=NULL;
    last=first;

    cin>>n;

    for(int i = 0 ; i < n ; i ++)
    {
        int x;
        Nod*p = (Nod*)malloc(sizeof(Nod));
        cin>>x;
        p->inf=x;
        last->next=p;
        last=p;

    }
      Nod*p=first;
    for(int i = 0 ; i <= n ; i ++)
    {
        cout<<p->inf<<" ";
        p=p->next;

    }
    getNt(first,3);


}
