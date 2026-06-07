class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int>mpp;
        vector<int>sub;
        int i,max_cnt=INT_MIN;

        if(nums.size() == 0)return 0;
        for(i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        for(auto it: mpp){
            sub.push_back(it.first);
        }
        int cnt=1;
        for(i=1;i<sub.size();i++){
            if(sub[i]-sub[i-1] == 1)
                cnt++;
            else
            {
                max_cnt=max(max_cnt,cnt);
                cnt=1;
            }
        }
        max_cnt=max(cnt,max_cnt);
        return max_cnt;
    }
};
