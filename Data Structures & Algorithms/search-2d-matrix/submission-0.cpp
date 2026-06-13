class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int colSize = matrix[0].size();
        int rowSize = matrix.size();
        int start=0,end=(rowSize*colSize)-1;
        int rowInd,colInd;
        int mid;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            rowInd = mid/colSize;
            colInd = mid%colSize;
            if(matrix[rowInd][colInd] == target)
                return true;
            else if(matrix[rowInd][colInd]<target)
                start = mid+1;
            else
                end=mid-1;
        }
        return false;
    }
};
