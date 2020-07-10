#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--) {
        int aL, aD, aR, aU, bL, bD, bR, bU;

        cin >> aL >> aD >> aR >> aU >> bL >> bD >> bR >> bU;

        int LL_x, LL_y, UR_x, UR_y;

        LL_x = max(aL, bL);
        LL_y = max(aD, bD);
        UR_x = min(aR, bR);
        UR_y = min(aU, bU);

        if(LL_x >= UR_x || LL_y >= UR_y)

            cout << "No Overlap\n";
        else
            cout << LL_x << ' ' << LL_y << ' ' << UR_x << ' ' << UR_y << '\n';

        if(t) cout << '\n';
    }
}
