#include<bits/stdc++.h>

using namespace std;

int main(){
	long n;
	vector<pair<long, long> >v;

	cin>>n;
	long cit[n];
	long cit2[n];

	for(auto i = 0; i < n; i++){

		cin>>cit[i];
		cit2[i]=cit[i]-i;

	}

	if(n==1){
        cout<<cit[0]<<endl;
	}

	else{

	for(int i=0;i<n;i++)
    {

        v.push_back(make_pair(cit2[i], cit[i] ));
    }

    sort(v.begin(), v.end());

      /*cout << "The vector after sort operation is:\n" ;
    for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << v[i].first << " "
             << v[i].second << endl;
    }*/
    int ans=0;
    for(int i=0;i<n;i++)
    {   int sum=0;
        for(int j=i;v[i].first==v[j].first;j++)
        {
            sum+=v[j].second;
           // cout<<sum<<endl;
        }
        ans=max(ans, sum);

    }

cout<<ans;

	}

}
