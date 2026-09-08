class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        bool flag = true;
        int i=0,j=0;
        while(i<word1.size() && j<word2.size()){
            if(flag){
                ans += word1[i];
                flag = false;
                i++;
            }
            else
            {
                ans += word2[j];
                flag = true;
                j++;
            }
        }
        while(i<word1.size())
        {
            ans += word1[i];
            i++;
        }
        while(j<word2.size()){
            ans += word2[j];
            j++;
        }
        return ans;
    }
};