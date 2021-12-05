#include<bits/stdc++.h>
using namespace std;
int n,l,r,K,a[105];
int main(){
	int T;cin>>T;
	while(T--){
		cin>>n>>l>>r>>K;
		for(int i=1;i<=n;i++)cin>>a[i];
		sort(a+1,a+n+1);
		int ans=0;
		for(int i=1;i<=n;i++)if(a[i]>=l&&a[i]<=r){
			if(K>=a[i])K-=a[i],ans++;
		}
		cout<<ans<<'\n';
	} 
	return 0;
}