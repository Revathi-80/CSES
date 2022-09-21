#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll n,sum=0;
cin>>n;
for(ll i=1;i<n;i++){
    ll a;
    cin>>a;
    sum+=a;
}
ll total= (n*(n+1))/2;
cout<<total-sum<<endl;
	return 0;
}
