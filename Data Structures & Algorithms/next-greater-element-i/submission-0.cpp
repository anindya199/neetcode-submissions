class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int i;
        int n=nums2.size();
        unordered_map<int,int>mpp;
        vector<int>ans;
        vector<int>temp;
        stack<int>st;
        for(i=n-1;i>=0;i--)
        {
            while(!st.empty() && nums2[i]>=st.top())
            st.pop();

            if(st.empty())
                temp.push_back(-1);
            else
                temp.push_back(st.top());

            st.push(nums2[i]);
        }
        reverse(temp.begin(),temp.end());

        for(i=0;i<n;i++)
            mpp[nums2[i]]=temp[i];

        for(i=0;i<nums1.size();i++)
        {
            ans.push_back(mpp[nums1[i]]);
        }
        return ans;
    }
};