class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int i;

        //left multiplication
        int left=1;
        ans[0]=left;
        for(i=1;i<nums.size();i++)
        {
            left=left*nums[i-1];
            ans[i]=left;
        }

        //right multiplication
        int right=1;
        for(i=nums.size()-2;i>=0;i--)
        {
            right=right*nums[i+1];
            ans[i]=ans[i]*right;
        }
        return ans;
    }
};
