class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i;
        string ans = "";
        for(int i=0;i<strs[0].size();i++)
        {
            for(string s : strs)
            {
                if(i >= s.size() || strs[0][i] != s[i])
                    return ans;
            }
            ans += strs[0][i];
        }
        return ans;
    }
};