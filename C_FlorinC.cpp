#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%4==0){
        cout<<0<<'\n'<<n/2<<" ";
        for(int i = 1 ; i < n/2 ; i+=2)
            cout<<i<<" "<<n-i+1<<" ";
    }
    else  if(n%4==1 ){
        cout<<1<<'\n'<<n/2<<" ";
        for(int i = 2 ; i < n/2+1 ; i+=2)
            cout<<i<<" "<<n-i+2<<" ";

    }
    else  if(n%4==2 ){
        cout<<1<<'\n'<<n/2<<" "<<1<<" ";
        for(int i = 3 ; i < n/2+1 ; i+=2)
            cout<<i<<" "<<n-i+3<<" ";

    }
    else  {
        cout<<0<<'\n'<<n/2<<" "<<3<<" ";
        for(int i = 4 ; i <= n/2+1 ; i+=2)
            cout<<i<<" "<<n-i+4<<" ";

    }

}
