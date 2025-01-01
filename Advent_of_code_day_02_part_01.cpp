#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=1000;
	int ans=0;
	for(int i=0;i<n;i++){
		vector<int> v;
		while(true){
			int x;
			cin>>x;
			v.push_back(x);
			char c;
			scanf("%c",&c);
			if(c=='\n') break;
		}
		int m=v.size();
		int sign=v[0]-v[1];
		int s=0;
		for(int j=0;j<m-1;j++){
			int diff=v[j] - v[j+1];
			if(diff==0) break;
			if((sign<0 && diff<0) && (abs(diff)>0 && abs(diff)<4)) s++;
			else if((sign>0 && diff>0) && (abs(diff)>0 && abs(diff)<4)) s++;
			else break;
		}
		if(s==m-1)ans++;
	}
	cout<<"="<<ans;
}
