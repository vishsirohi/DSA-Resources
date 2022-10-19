#include<bits/stdc++.h>
using namespace std;
int Eggdrop(int n,int f){
    vector<vector<int> > dp(f + 1, vector<int>(n + 1, 0));
    int x = 0;
    while (dp[x][n] < f) {
         x++;
        for (int i = 1; i <= n; i++)
            dp[x][i] = dp[x - 1][i - 1] + dp[x - 1][i] + 1;
    }
    return x;
}
//Time complexity- O(n*log f)
//Space complexity - O(n*f)
int main(){
  //Number of Eggs
  int n;
  cin>>n;
  //NUmber of floors
  int f;
  cin>>f;
  cout<<Eggdrop(n,f);
  return 0;
}
