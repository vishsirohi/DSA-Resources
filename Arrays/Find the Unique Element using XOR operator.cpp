int findUnique(int *arr, int n) {
int ans = arr[0];
        for (int i = 1; i <n; i++)
            ans = ans ^ arr[i];// this is xor operator, in 2nd iteration we stor 2^3 in res then,
                               //in third 2^3^1, then 2^3^1^6 and now when we get another 6, it 
                      // will club with previous 6 and make 0.
    // 2^2 = 0 
 
        return ans;
}
