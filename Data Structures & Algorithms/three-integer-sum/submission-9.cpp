class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        for(int k=0;k<nums.size()-2;k++)
        {
            int val = nums[k];
            int i=k+1,j=nums.size()-1;
            temp.clear();
            while(i<j)
            {
                if((0-val) == nums[i]+nums[j])
                {
                    temp.push_back(val);
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    if(st.find(temp)!=st.end())
                    {
                        temp.clear();
                        i++,j--;
                    }
                    else
                    {
                        st.insert(temp);
                        ans.push_back(temp);
                        temp.clear();
                        i++,j--;
                    }
                }
                else if((0-val) > nums[i]+nums[j])
                    i++;
                else
                    j--;
            }
        }
        return ans;
    }
};
