// 2. Find minimum and maximum element in an array(https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1)
pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> v;
    if(n==1){
        v = make_pair(a[0],a[0]);
        return v;
    }
    long long int maxi = a[0];
    long long int mini = a[0];
    
    for(int i = 1 ; i < n ; i++){
        maxi = max(maxi,a[i]);
        mini = min(mini,a[i]);
    }
    v = make_pair(mini,maxi);
    
    return v;
}