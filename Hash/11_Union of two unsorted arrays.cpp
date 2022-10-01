#include <bits/stdc++.h>
using namespace std;

int unionSize(int arr1[], int m, int arr2[], int n)
{
    unordered_set<int> us;
    for(int i = 0; i < m; i++)
     us.insert(arr1[i]);
    for(int i = 0; i < n; i++)
     us.insert(arr2[i]);
     
    return us.size(); 
}

int main()
{
    int arr1[] = {2, 8, 3, 5, 6};
    int arr2[] = {4, 8, 3, 6, 1};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    
    cout << unionSize(arr1, m, arr2, n);
}

//Java Code
/*
import java.util.*;
import java.io.*;
import java.lang.*;

class Union
{
    public static void main (String[] args) {
        int arr1[] = new int[]{2, 8, 3, 5, 6};
        int arr2[] = new int[]{4, 8, 3, 6, 1};
        int m = arr1.length;
        int n = arr2.length;
        
        System.out.println(unionSize(arr1, m, arr2, n));
    }
    
    static int unionSize(int arr1[], int m, int arr2[], int n)
    {
        Set<Integer> hs = new HashSet<Integer>();
        for(int i = 0; i < m; i++)
          hs.add(arr1[i]);
        for(int i = 0; i < n; i++)
          hs.add(arr2[i]);
          
        return hs.size();
    }
}
*/
