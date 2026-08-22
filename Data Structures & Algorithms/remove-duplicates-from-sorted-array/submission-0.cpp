class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j;
        vector<int>p;
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1])
                p.push_back(nums[i]);
        }
        p.push_back(nums[nums.size()-1]);
        for(i=0;i<p.size();i++)
            nums[i]=p[i];
        return p.size();
    }
};