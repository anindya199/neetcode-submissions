class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int s=0,e=n-1;
        int len=n-1;
        int ans=INT_MIN;
        int vol;

//checking for the minimum height and that is the level of water is contaied
        while(s<e)
        {
            if(heights[s]<=heights[e])
            {
                vol=heights[s]*len;
                ans=max(vol,ans);
                s++;
            }
            else
            {
                vol=heights[e]*len;
                ans=max(vol,ans);
                e--;
            }
            len--;
        }
        return ans;

    }
};
