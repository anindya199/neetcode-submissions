class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int maxi = *max_element(nums.begin(),nums.end());
        if(maxi<=0)return 1;
        int n = nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
            mp[nums[i]]++;
        
        int i;
        for(i=1;i<maxi;i++)
        {
            if(mp.find(i) != mp.end())
                continue;
            else{
                if(i == 0)continue;
                else return i;
            }        
        }
        if(i == maxi)
            return i+1;
    }
};