#include<bits/stdc++.h>

using namespace std;

struct Nod{
   int inf;

   Nod *next;
};
void append(Nod *a,Nod *b)
{
    Nod *p;
    for(p = a; p != NULL; p = p->next)
    {
        p=p->next;
    }
    p->next=b;
    b->next=NULL;
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

    Nod *first1 = (Nod*)malloc(sizeof(Nod));
    first1->inf=1;
    first1->next=NULL;

     append(first,first1);
      Nod *p;
     for(p = first; p != NULL; p = p->next)
    {
        cout<<p->inf<<" ";

    }
}
