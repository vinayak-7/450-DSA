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
