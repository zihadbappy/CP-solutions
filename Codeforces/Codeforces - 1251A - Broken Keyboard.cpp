#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;

cin>>n;

for(int i=0;i<n;i++)
{

    string s;
    cin>>s;

    if(s.size()==1) cout<<s;
    else{

    for(int j=1;j<s.size();j++)
    {
     if(s[j]==s[j-1])
     s[j]='\0';
    }

    }

    cout<< s<< endl;







}







}
