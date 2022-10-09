#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {20,30,40,40,40,40,50};

    int n = sizeof(arr)/sizeof(int);

    //Search in a sorted array

    // int key;
    // cin>>key;

    // bool present = binary_search(arr,arr+n,key);
    // if(present){
    //     cout<<"Present";
    // }
    // else
    // {
    //     cout<<"Absent";
    // }

  // Two more things 
  // Get the index of the elemnt
  // lower_bound(s,e,key) and upper_bound(s,e,key)

  auto lb = lower_bound(arr,arr+n,40);
  cout<<"Lower bound of 40 "<<(lb - arr)<<endl;

 
  //upper bound 
  auto ub = upper_bound(arr,arr+n,40);
  cout<<endl<<"Upper_bound of 40 is "<<(ub - arr)<<endl;

  cout<<"Occ Freq of 40 is "<<ub - lb;
    return 0;

}
