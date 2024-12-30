#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> a,b;
	int n=1000;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		a.push_back(x);
		b.push_back(y);
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	int ans=0;
	for(int i=0;i<n;i++){
		ans+=abs(a[i]-b[i]);
	}
	cout<<"="<<ans;
	return 0;
}
