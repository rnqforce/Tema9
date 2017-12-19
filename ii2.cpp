#include<bits/stdc++.h>

using namespace std;

struct Nod{
     int inf;

     Nod *next;
};

void SortatInsert(Nod *p , Nod *inser)
{
    bool ok=0;
    Nod *q = p,*f=p;
    while((inser->inf) > (q->inf)) {
        f=q;
        q = q->next;
    }

    inser->next = f->next;
    f->next = inser;
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

     Nod *inser,*p;
     inser = (Nod*) malloc(sizeof(Nod));
     inser->inf=7;
     inser->next=NULL;

     SortatInsert(first,inser);

     for(p = first; p != NULL; p = p->next)
    {
        cout<<p->inf<<" ";

    }
}
