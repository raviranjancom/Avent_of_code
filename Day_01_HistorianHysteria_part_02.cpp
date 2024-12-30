#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> a,b;
	map<int,int> mp;
	int n=1000;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		a.push_back(x);
		b.push_back(y);
		mp[y]++;
	}
	int ans=0;
	for(int i=0;i<n;i++){
		ans+=a[i]*mp[a[i]];
	}
	cout<<"="<<ans;
	return 0;
}
