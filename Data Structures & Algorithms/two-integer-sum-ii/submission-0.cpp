class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int start = 0, end = arr.size() - 1;
        vector<int> a;
        while (start < end) 
        {
            if (arr[start] + arr[end] == target) 
            {
                a.push_back(start+1);
                a.push_back(end+1);
                break;
            }
             else if (arr[start] + arr[end] < target)
                start++;
            else
                end--;
        }
        return a;
    }
};
