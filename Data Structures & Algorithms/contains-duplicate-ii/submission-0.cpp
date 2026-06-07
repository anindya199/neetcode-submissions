class Solution {
public:
    int minDist(vector<int>a)   
    {
        int i;
        int mini=INT_MAX;

        for(i=1;i<a.size();i++)
            if(mini>abs(a[i]-a[i-1]))
                mini=abs(a[i]-a[i-1]);

        return mini;
    }
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector<int>index;
        unordered_map<int,vector<int>>mpp;

        for(int i=0;i<nums.size();i++)
            mpp[nums[i]].push_back(i);

        for(auto it:mpp)
        {
            vector<int> val=it.second;
            if(val.size()>1)
            {
                if(minDist(val)<=k)
                    return true;
            }
        }
        return false;
    }
};