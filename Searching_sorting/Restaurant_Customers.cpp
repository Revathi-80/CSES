#include<bits/stdc++.h>
using namespace std;
#define int long long
bool cmp(int a,int b){
	return a>b;
}
 
signed main(){
	int n;
	cin>>n;
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++){
		int start,end;
		cin>>start>>end;
		v.push_back({start,1});
		v.push_back({end,-1});
	}
	sort(v.begin(), v.end());
	int current=0,maxi=0;
	for(const pair<int,int> &i :v){
		current+=i.second;
		maxi=max(maxi,current);
	}
	cout<<maxi;
	return 0;
}
