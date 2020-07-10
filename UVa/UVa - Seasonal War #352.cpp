#include<bits/stdc++.h>
using namespace std;

string warEg[25];
bool used[25][25];
int n;

void dfs(int x, int y)
{
    if(x<0 || x>=n || y<0 || y>=n) return;
    if(used[x][y]==true || warEg[x][y]=='0') return;

    used[x][y]=true;

    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x,y+1);
    dfs(x,y-1);
    dfs(x+1,y+1);
    dfs(x-1,y+1);
    dfs(x+1,y-1);
    dfs(x-1,y-1);

}

int main()
{

int imgNo=1;

while(cin>>n)
{
int ans =0;

for(int i=0;i<n;i++) cin>>warEg[i];

memset(used, false, sizeof(used));


for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(used[i][j]==false && warEg[i][j]=='1')
        {

        dfs(i, j);
        ans++;
        }
    }
}

cout<<"Image number "<<imgNo++<<" contains "<<ans<<" war eagles."<<endl;

}



return 0;
}
