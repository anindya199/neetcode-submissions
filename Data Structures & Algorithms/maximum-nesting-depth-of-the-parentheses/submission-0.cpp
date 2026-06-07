class Solution {
public:
    int maxDepth(string s) {
        int i,cnt=0,maxi=0;
        stack<int>st;
        for(i=0;i<s.size();i++)
        {
            if(s[i] == '(')
            {
                st.push(s[i]);
                cnt++;
            }
            else if(s[i] == ')'){
                st.pop();
                cnt--;
            }
            
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};