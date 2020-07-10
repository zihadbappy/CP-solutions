#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, cou=0;
    string s;

    cin>>n;

    cin>>ws;

    getline(cin, s);

    for(i=0; i<n; i+=2)
    {
        if(s[i]==s[i+1])
        {
            if(s[i]=='a')
                s[i]='b';
            else
                s[i]='a';
            cou++;
        }
    }
    cout<<cou<<endl;
    cout<<s<<endl;

    return 0;
}
