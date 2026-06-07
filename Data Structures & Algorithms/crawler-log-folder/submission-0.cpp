class Solution {
public:
    int minOperations(vector<string>& logs) {
        int i,cnt=0;
        stack<string>st;

        for(i=0;i<logs.size();i++)
        {
            if(logs[i] != "./" && logs[i] != "../")
                st.push(logs[i]);
            else if(!st.empty() && logs[i] == "../")
                st.pop();
            else
                continue;

        }
        while(!st.empty()){
            cnt++;
            st.pop();
        }
        return cnt;
    }
};