#include<bits/stdc++.h>
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

//memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
//memset(arr, 0, sizeof arr); // to clear array of integers
// We have abandoned the use of "REP" and "TRvii" since the second edition
// in order to reduce the confusion encountered by new programmers The following shortcuts are frequently used in both our C/C++ and Java code:
// ans = a ? b : c; // to simplify: if (a) ans = b; else ans = c;
// ans += val; // to simplify: ans = ans + val; and its variants
// index = (index + 1) % n; // index++; if (index >= n) index = 0;
// index = (index + n - 1) % n; // index--; if (index < 0) index = n - 1;
// int ans = (int)((double)d + 0.5); // for rounding to nearest integer
// ans = min(ans, new_computation); // min/max shortcut
// alternative form but not used in this book: ans <?= new_computation;
// some code use short circuit && (AND) and || (OR)

int main()
{


int k, ter;





do{
cin>>k;

        int n, m;
if(k!=0){
    cin>> n>> m;
}

for(int i=0;i<k; i++)
{
    int x, y;
    cin>> x>>y;
    x-=n;
    y-=m;

    if(x==0 || y==0)
        cout<< "divisa"<< endl;

    else if(x<0 && y>0)
    cout<< "NO"<< endl;

    else if(x>0 && y>0)
        cout<<"NE"<<endl;

    else if (x>0 && y< 0)
        cout<< "SE"<< endl;
    else cout<< "SO"<< endl;


}





}while(k!=0);




return 0;
}
