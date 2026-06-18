class Solution {
public:
    int minEatingSpeed(vector<int>& arr, int h) {
        long long start=0,end,mid,ans;
        int n=arr.size();

        for(int i=0;i<n;i++)
        {
            if(end<arr[i])
                end=arr[i];
            start=start+arr[i];
        }

        start=start/h;
        if(!start)
            start=1;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            int Time=0;
            for(int i=0;i<n;i++)
            {
                int x;
                x=arr[i]/mid;
                if(arr[i]%mid!=0)
                    x++;
                Time=Time+x;
            }
            if(Time>h)
                start=mid+1;
            else
            {
                ans=mid;
                end=mid-1;
            }
        }
    return ans;
    }
};
