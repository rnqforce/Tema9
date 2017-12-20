#include<bits/stdc++.h>

using namespace std;

struct Nod{
     int inf;

     Nod *next;
};
void RemoveDuplicates(Nod *first)
{
    Nod *p ;

    for(p = first; p != NULL&&p->next!=NULL; p = p->next)
    {
        if(p->inf == p->next->inf)
            p->next=p->next->next;

    }


}
int main()
{
    int n;
    Nod *first = (Nod*)malloc(sizeof(Nod)),*last;
    first->inf=1;
    first->next=NULL;
    last=first;

    cin>>n;

    for(int i = 0 ; i < n ; i ++)
    {
        int x;
        cin>>x;

        Nod*p = (Nod*)malloc(sizeof(Nod));

        p->inf=x;
        p->next = NULL;

        last->next=p;
        last=p;
    }

     RemoveDuplicates(first);

     for(Nod *p = first; p != NULL; p = p->next)
    {
        cout<<p->inf<<" ";

    }
}
