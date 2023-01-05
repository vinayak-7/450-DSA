long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int res = arr[0];
        int maxEnding = arr[0];
        
        for(int i = 1; i < n ; i++)
        {
            maxEnding = max(maxEnding + arr[i] , arr[i]);
            res = max(res , maxEnding);
        }
        
        return res;
    }

long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long currSum = 0;
    long long mx = INT_MIN;
    for( int i = 0; i < n; i++){
        currSum += arr[i];
        if( currSum < 0){
            currSum = 0;
        }
        mx = max( currSum , mx );
    }
    return mx;
}
