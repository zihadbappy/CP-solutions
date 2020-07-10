#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
#include<tuple>
using namespace std;



bool sortinrev(const tuple<int,string,int> &a,
               const tuple<int,string,int> &b)
{
       return (get<2>(a) < get<2>(b));
}

void sortArr(int roll[], string name[], int marks[], int n )
{
    vector<tuple <int, string, int >> vp;
    ///vector< pair<pair<int, string> >, int> vp;
    int i;
    for (i = 0; i < n; i++) {
        vp.push_back(make_tuple(roll[i], name[i], marks[i]));
    }
    sort(vp.rbegin(), vp.rend(), sortinrev);

    int buffer = -1;
    int buffer_idx = 0;
    int buffer_idx_end = 0;

    for( i=0;i<n;i++)
    {
        if(get<2>(vp[i])==-1)
            buffer_idx_end++;
        else{
            if(buffer_idx_end>0)
                sort(vp.begin()+buffer_idx, vp.begin()+buffer_idx_end+1);

        buffer = get<2>(vp[i]);
            buffer_idx = i;
            buffer_idx_end = i;}

        if(buffer_idx_end != buffer_idx)
        sort(vp.begin()+buffer_idx, vp.end());


    cout<< "Roll | Name       | Marks"<<endl;
    cout<< "-------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<setw(4)<<get<0>(vp[i]) << " | ";

        cout<<get<1>(vp[i]);

        for(int j=0;j<11-get<1>(vp[i]).length();j++) cout<<" ";

        cout<<"|";
        cout <<" " << get<2>(vp[i])<<endl;}
}
}



int main()
{
fstream cin;
cin.open("a.txt");
int n, i;
cin>>n;
int marks[n], roll[n];
string name[n];

for(i=0;i<n;i++)
{
    cin>>roll[i];
    cin>>name[i];
    cin>> marks[i];
}

sortArr(roll, name, marks,n);



}
