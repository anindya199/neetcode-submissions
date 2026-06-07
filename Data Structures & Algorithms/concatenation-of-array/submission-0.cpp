class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size=nums.size()*2;
        vector<int>ans(size);
        int i;
        for(i=0;i<size;i++)
            if(i<nums.size()){
                ans[i]=nums[i];
            }
            else
                ans[i] = nums[i-nums.size()];

        return ans;
    }
};