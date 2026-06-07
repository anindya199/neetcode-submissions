class Solution {
public:
    int trap(vector<int>& height) {
        int water=0,n=height.size();
        int i,left_max=0,right_max=0,index=0,max_height=0;
        for(i=0;i<n;i++){
            if(max_height<height[i]){
                max_height=height[i];
                index=i;
            }
        }
        //left part

        for(i=0;i<index;i++)
        {
            left_max=max(left_max,height[i]);
            if(left_max>height[i])
                water+=(left_max-height[i]);
        }

        //right part

        for(i=n-1;i>index;i--)
        {
            right_max=max(right_max,height[i]);
            if(right_max>height[i])
                water+=(right_max-height[i]);
        }
        return water;
    }
};
