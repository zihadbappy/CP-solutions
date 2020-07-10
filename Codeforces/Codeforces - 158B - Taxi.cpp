#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;

    vector <int> v(n);
    for(int i=0;i<n;i++)
    {   
        cin >> v[i];
    }

    sort(v.begin(), v.end()); 
    
    int count=0;
    int i=0, j=n-1;
    
    while(i!=j)
    {
        if(v[i]+v[j]<=4)
        {
            v[j]+=v[i];
            i++;
        }
    else
    {
        j--;
        count++;
    }
    
    }


    cout<< ++count;


    return 0;
}