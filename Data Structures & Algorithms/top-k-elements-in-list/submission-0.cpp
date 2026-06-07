class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        map<int,int>mpp;
        int i,maxi,value;

        for(i=0;i<nums.size();i++)
        mpp[nums[i]]++;

        int cnt=1;
        while(cnt<=k){
            maxi=INT_MIN;
            for(auto it:mpp)
            {
                if(maxi<it.second)
                {
                    maxi=it.second;
                    value=it.first;    
                }
            }
            //when i got the maximum just remove the element from the map
            mpp.erase(value);
            ans.push_back(value);
            cnt++;
        }
        return ans;
    }
};
