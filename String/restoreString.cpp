class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        string arr = s;

        for(int i = 0 ; i < s.length() ; i++)
        {
            arr[indices[i]] = s[i];
        }

        return arr;


    }
};
