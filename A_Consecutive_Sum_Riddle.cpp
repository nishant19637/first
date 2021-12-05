#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;cin>>T;
	while(T--){
        int n,i,k;
        cin>>n;
        i=1;
        k=2*n-i*i;
        while(k%2!=1)
        {
            i++;
            k=2*n-i*i;
        }
        int l,r;
        l=(k-1)/2*i;
        r=i*i;
        cout<<l<<r<<endl;




        	} 
	return 0;
}