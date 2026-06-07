class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        vector<int>merge;
        //merging the two sorted arrays
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            {
                merge.push_back(nums1[i]);
                i++;
            }
            else
            {
                merge.push_back(nums2[j]);
                j++;
            }
        }
        //As one of them is exhausted we need to add the remaining elements to the vector
        while(i<nums1.size())
        {
            merge.push_back(nums1[i]);
            i++;
        }

        while(j<nums2.size())
        {
            merge.push_back(nums2[j]);
            j++;
        }

        //checking for the merge array size ->is even or odd
        int s=0,e=merge.size()-1;
        double d;

        if((merge.size()-1)%2 == 0)
        {
            int index = (s+e)/2;
            d = merge[index];
        }
        else{
            int index = (s+e)/2;
            d = (merge[index]+merge[index+1])/2.0;
        }
        return d;
    }
};
