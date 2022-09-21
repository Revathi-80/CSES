#include<bits/stdc++.h>
using namespace std;
#define int long long
bool cmp(int a,int b){
	return a>b;
}
 
signed main(){
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	vector<int>ans;
	stack<pair<int,int>>s;
	for(int i=0;i<n;i++){
		if(s.size()==0){
			ans.push_back(0);
		}
		else if(s.size()>0 && s.top().first<v[i]){
			ans.push_back(s.top().second);
		}
		else if(s.size()>0 && s.top().first>=v[i]) {
 
			while(s.size()>0 && s.top().first>=v[i]){
				s.pop();
			}
				if (s.size()==0)
				{
					ans.push_back(0);
				}
				else {
					ans.push_back(s.top().second);
				}
			
		}
		s.push({v[i],i+1});
 
	}
	//reverse(ans.begin(), ans.end());
	for (int i = 0; i <n; ++i)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
