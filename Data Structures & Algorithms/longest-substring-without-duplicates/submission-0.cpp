class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,i;
        unordered_map<char,bool>mpp;
        int maxlen=0;

        for(i=0;i<s.size();i++)
            mpp[s[i]]=false;

        while(r<s.size())
        {
            //writing while loop because if the letter is in middle of 
            //the string then we need to make it false till then loop executes
            while(mpp[s[r]]==true)
            {
            mpp[s[l]]=false;
            l++;
            }
            if(mpp[s[r]]==false)
            {
            maxlen=max(maxlen,r-l+1);
            mpp[s[r]]=true;
            }
            r++;
        }
        return maxlen;
    }
};
