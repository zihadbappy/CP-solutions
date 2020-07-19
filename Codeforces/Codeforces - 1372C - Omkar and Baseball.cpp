 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int t;
    cin>>t;
     for(int i=0;i<t;i++){
         bool flag=true;
         int n, ans=0;
         cin>>n;

        for(int j=1;j<=n;j++){
            int x; cin>>x;
            if(j!=x && flag) ans++;
            flag= (x==j);
         }
     cout<<min(ans, 2)<<endl;
    }

     return 0;
 }