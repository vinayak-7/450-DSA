int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int>s;
        for(int i = 0; i<max(n,m); i++){
            if(i<n) s.insert(a[i]);
            if(i<m) s.insert(b[i]);
        }
        return s.size();
    }
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{

    unordered_set<int>s;
    pair < int , int > ans;
    for(int i = 0; i<max(n,m); i++){
        if(i<n) s.insert(arr1[i]);
        if(i<m) s.insert(arr2[i]);
    }
    
    ans.first = n + m - s.size();
    ans.second = s.size();
    
    return ans;
}
