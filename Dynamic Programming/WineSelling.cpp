#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<list>
#include<utility>
#include<limits.h>
#include<chrono>
auto start =chrono::steady_clock::now();

int Max_profit(vector<int> arr, int l,int h,int y,vector<vector<int>>& dp){
    if(l==h){
        return arr[l]*y;
    }
    else if(dp[l][h]!=0){
        return dp[l][h];
    }
    else{
        return dp[l][h]=max(arr[l]*y + Max_profit(arr,l+1,h,y+1,dp),arr[h]*y+Max_profit(arr,l,h-1,y+1,dp));
    }
}

int Max_profit_dp(vector<int> arr){
    
    int n=arr.size();
    int y=n;
    vector<vector<int>> dp(n,vector<int>(n,0));

    for(int i=n-1;i>=0;--i){
        for(int j=i;j<n;++j){
            if(i==j){
                dp[i][j]=n*arr[j];
            }
            else {
                dp[i][j]=max(arr[i]*y+dp[i+1][j],arr[j]*y+dp[i][j-1]);
            }
        }
        y--;
    }
    cout<<endl;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[0][n-1];
}
int main()
{ 
  vector<int> arr{2,5,3};
  vector<vector<int>> dp(arr.size(),vector<int>(arr.size(),0));

  cout<<"\n Ans :"<<Max_profit_dp(arr);
  
  auto end=chrono::steady_clock::now();
  auto diff=end-start;
  cout<<endl<<chrono::duration<double,milli>(diff).count()<<" ms "<<endl;
  
  return 0;
}
