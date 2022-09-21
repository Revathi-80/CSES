#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
signed main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	map<int,int>ans;
    int i=0,j=0,current=0,maxi=0;
    while(j<n){
    	if(ans.find(arr[j])==ans.end() || ans[arr[j]]==0){
    		ans[arr[j]]++;
    		current++;
    		maxi=max(current,maxi);
    		j++;
    	}
    	else {
    		ans[arr[i]]--;
    		current--;
    		i++;
    	}
 
    }
    cout<<maxi<<endl;
	return 0;
}
