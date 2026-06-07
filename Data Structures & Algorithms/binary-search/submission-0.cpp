class Solution {
public:
    int search(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int start = 0, end = nums.size() - 1, mid;
        while (start <= end) {
            mid = start + (end - start) / 2;
            //(nums[mid]==key)
            if (nums[mid] == target)
                return mid;
            //(nums[mid]<key)
            else if (nums[mid] < target)
                start = mid + 1;
            // nums[mid]>key
            else
                end = mid - 1;
        }
        return -1;
    }
};
