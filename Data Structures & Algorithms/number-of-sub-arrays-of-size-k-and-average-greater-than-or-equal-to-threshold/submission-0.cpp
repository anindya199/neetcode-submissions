class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i,cnt=0,sum=0;
        int l=0,r=k-1;
        for(i=0;i<k;i++)
            sum+=arr[i];
        
        while(r<arr.size()){
            if(sum/k >= threshold) cnt++;

            sum-=arr[l];
            l++;
            r++;
            sum+=arr[r];
        }
        return cnt;
    }
};