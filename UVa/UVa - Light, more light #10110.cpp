#include<bits/stdc++.h>
#include<math.h>
#include<vector>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<pii> vii;
typedef vector<int> vi;
typedef vector<ll> vl;

#define fi first;
#define se second;
#define pb push_back;
#define mp make_pair;

#define INF 1000000000


int main()
{
long long int n;

while(true)
{
    cin>>n;
    if(n==0) break;

    long int temp;
    temp = sqrt(n);

    if(n==temp*temp)
        cout<<"yes"<<endl;
        else cout<<"no"<<endl;
}

return 0;
}
