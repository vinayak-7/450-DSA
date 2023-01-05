int getMinDiff(int arr[], int n, int k) {
        // code here
    sort(arr, arr+n);
    int ans = arr[n - 1] - arr[0];
    int minimum = arr[0] + k;
    int maximum = arr[n - 1] - k;
    int current_minimum, current_maximum;
    for (int i = 0; i < n - 1; i++)
    {
        // Finding the minimum and the maximum value if we perform the decrement operation on all the
        // indexes greater than index ‘i’ and increment operation until the index ‘i’.
        current_minimum = min(arr[i + 1] - k, minimum);
        current_maximum = max(arr[i] + k, maximum);
        // Checking if minimum value is non-negative or not.
        if (current_minimum >= 0)
        {
            ans = min(ans, current_maximum - current_minimum);
        }
    }
    return ans;
