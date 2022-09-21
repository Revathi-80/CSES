

#include<bits/stdc++.h>
using namespace std;
#define int long long
bool cmp(int a,int b){
	return a>b;
}
 
signed main(){
	int n,m,k;
	cin>>n>>m>>k;
	int  arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int b[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>b[i];
	}
	sort(arr,arr+n);
	sort(b, b+m);
	int cnt=0,i=0,j=0;
	while(i<n && j<m){
		if(arr[i]-k>b[j])
			j++;
		else if(arr[i]+k<b[j]){
			i++;
		}
		else{
			i++,j++,cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
