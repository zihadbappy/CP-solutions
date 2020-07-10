#include <bits/stdc++.h>

using namespace std;

int main()
{
    int f=1;
    string s;
    cin>>s;

    for(int i=1; i<s.length(); i++)
    {
        if(s[i]>=97)
        {
            f=0;
        }
    }

    if(f==1)
    {
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>=65 && s[i]<=90)
            s[i]=97+s[i]-65;

            else if(s[i]>=97&&s[i]<=122)
            s[i]=65+s[i]-97;
        }
    }

    cout<<s<<endl;
    return 0;
}
