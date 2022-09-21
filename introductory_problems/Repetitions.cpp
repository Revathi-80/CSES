#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
string s;
int cnt=1,maxi=1;
cin>>s;
int l=s.length();
for(int i=0;i<l;i++){
    if(s[i]==s[i-1]){
      cnt++;
      maxi=max(maxi,cnt);
    } 
    else cnt=1;
}
cout<<maxi<<endl;
	return 0;
}
