class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        vector<string>temp;
        vector<vector<string>>ans;
        int i;
        for(i=0;i<strs.size();i++)
        {
            string sortS=strs[i];
            sort(sortS.begin(),sortS.end());
            mpp[sortS].push_back(strs[i]);
        }

        for(auto it: mpp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};
