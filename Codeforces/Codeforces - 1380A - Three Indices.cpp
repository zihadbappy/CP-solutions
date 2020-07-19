#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int ans=0, n;
    cin>>n;
    long long int a[n];
    for(int i=1;i<=n;i++) cin>>a[i];
    
    for(int i=2;i<n;i++)
      if(a[i]>a[i-1] && a[i]>a[i+1]) {ans=i;break;}
    
    
    if(ans==0) cout<<"NO\n";
    else{
    cout<<"YES"<<endl;
    cout<<ans-1<<" "<<ans<<" "<<ans+1<<endl;}
  }
}