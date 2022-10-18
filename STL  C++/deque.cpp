#include<iostream>
#include<stack>
#include<vector>
#include<string>
#include<deque>
using namespace std;
vector<int> MaxSubArray(vector<int> arr , int k ){
      vector<int> ans;
      deque<int> dq ;
      int i = 0 , j = 0 ;
      while ( j < arr.size() ){
           while ( !dq.empty() and dq.back() < arr[j] )  dq.pop_back();
            dq.push_back(arr[j]);
            j++; 
           if( j - i  == k )  {
                ans.push_back(dq.front());
                if( arr[i] == dq.front() ) dq.pop_front();
                i++;
           } 
      }
     return ans; 
}
int main(){
    vector<int> arr = { 1 , 2 , 3 , 1 , 4 , 5 ,2 , 3 , 6};
    auto vec = MaxSubArray( arr , 3);
    cout<<"\n ANS is : " ;
    for ( int i = 0 ; i < vec.size() ; ++i ) cout<<vec[i]<<" ";
    return 0;
}
