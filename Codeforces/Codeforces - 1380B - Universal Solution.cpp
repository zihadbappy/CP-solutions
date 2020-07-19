//cf 1380B

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {   int ans[3]={0};
        string s; cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R') ans[0]++;
            if(s[i]=='P') ans[1]++;
            if(s[i]=='S') ans[2]++;
        }
        char x;
        int max= distance(ans, max_element(ans, ans+3)); 
        if(max==0) x='P';
        if(max==1) x='S';
        if(max==2) x='R';
        
        for(int i=0;i<s.size();i++)
         cout<<x;
        
        cout<<endl;
    }
}