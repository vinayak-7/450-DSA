/*
    Time Complexity: O(N)
    Space Complexity: O(K)

    where N is the length of the string and K is the number of characters.
*/


vector<pair<char,int>> duplicate_char(string s, int n){
    
    // Find the duplicate characters in a string.
    
    const int k = 255;
    vector<int> freq(k);
    for (int i = 0; i < s.size(); i++){
        freq[s[i]] += 1;
    }
    vector<pair<char,int>> ans;
    for (int i = 0; i < k; i++){
        if (freq[i] > 1){
            ans.push_back({char(i), freq[i]});
        }
    }
    return ans;
}
