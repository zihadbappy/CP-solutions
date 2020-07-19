#include<bits/stdc++.h>
using namespace std;

int main(){
int t;cin>>t;
while(t--){
string s;cin>>s;
int n=s.length();
unordered_map<char,int> mp;
for(int i=0;i<n;i++){
mp[s[i]]++;
}
int mx=max(mp['R'],max(mp['S'],mp['P']));
if(mx==mp['R']){string g(n,'P'); cout<<g<<endl;}
else if(mx==mp['S']){string g(n,'R'); cout<<g<<endl;}
else{string g(n,'S'); cout<<g<<endl;}
}
return 0;
}