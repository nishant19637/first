#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <iterator>
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
using namespace std; 
 
 
int main() {
	ll int t,k;
    cin>>t;
    for(k=1;k<=t;k++){
        ll int a,b,c;
        cin>>a>>b>>c;
        if(a==b && b==c && c==a)
        {
            cout<<1<<" "<<1<<" "<<1<<endl;
        }
        else
        {
        if(a==b && a>c )
        {
        cout<<1<<" "<<1<<" "<<a-c+1<<endl;
        }
        if(a==b && a<c )
        {
        cout<<c-b+1<<" "<<c-b+1<<" "<<0<<endl;
        }
        if(b==c && b>a)
        {
        cout<<b-a+1<<" "<<1<<" "<<1<<endl;
        }
        if(b==c && b<a)
        {
        cout<<0<<" "<<a-b+1<<" "<<a-b+1<<endl;
        }
        if(c==a && a>b)
        {
            cout<<1<<" "<<c-b+1<<" "<<1<<endl;
        }
        if(c==a && a<b)
        {
            cout<<b-c+1<<" "<<0<<" "<<b-c+1<<endl;
        }
        if(a!=b && b!=c && c!=a)
        {
            if(a>b && a>c)
             cout<<0<<" "<<a-b+1<<" "<<a-c+1<<endl;
             if(b>a && b>c)
             cout<<b-a+1<<" "<<0<<" "<<b-c+1<<endl;
             if(c>b && c>a)
             cout<<c-a+1<<" "<<c-b+1<<" "<<0<<endl;
        }
        }
    }
	return 0;
}