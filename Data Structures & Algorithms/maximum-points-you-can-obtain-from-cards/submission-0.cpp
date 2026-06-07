class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int i;
        int sum=0,max_sum;
        //calculating the sum upto k elements
        for(i=0;i<=k-1;i++)
            sum+=cardPoints[i];
        //updating the max_sum and l and r 
        max_sum=sum;
        int l=i-1;
        int r=cardPoints.size()-1;
        //and calculatong the sum depending on the position of l and r
        sum-=cardPoints[l];
        l--;
        sum+=cardPoints[r];
        max_sum=max(sum,max_sum);

        //now doing l-- and r-- and calculating sum accordingly
        while(l>=0)
        {
            sum-=cardPoints[l];
            l--;
            r--;
            sum+=cardPoints[r];

            max_sum=max(sum,max_sum);

        }
        return max_sum;
        
    }
};