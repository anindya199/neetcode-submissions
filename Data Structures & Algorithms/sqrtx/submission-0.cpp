class Solution {
public:
    int mySqrt(int x) {
       if(x==0)
            return 0;
        int start=1,end=x;
        long long mid;
        int ans;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(mid*mid==x)
            {
                ans=mid;
                break;
            }
            else if(mid*mid<x)
            {
                ans=mid;
                start=mid+1;
            }
            else
                end=mid-1;
            
        }
        return ans; 
    }
};