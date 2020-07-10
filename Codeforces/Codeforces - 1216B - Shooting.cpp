#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}

void sortArr(int arr[], int n)
{
    vector<pair<int, int> > vp;

    for (int i = 0; i < n; ++i) {
        vp.push_back(make_pair(arr[i], i));
    }

    sort(vp.begin(), vp.end(), sortinrev);


        int shot=0;
     for(int j=0;j<n;++j)
     {
         shot+=j*vp[j].first+1;
     }

      cout<<shot<<endl;

     for(int k=0;k<n;++k)
     {
         cout<<vp[k].second+1<<' ';
     }

    }
int main()
{
    int n;

    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sortArr(arr, n);

    return 0;
}


