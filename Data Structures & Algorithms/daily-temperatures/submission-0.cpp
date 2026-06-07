class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        if(n == 0) return {};

        stack<int> st;
        vector<int> ans(n);

        for(int i = n - 1; i >= 0; i--)
        {
            while(!st.empty() && temperatures[i] >= temperatures[st.top()])
                st.pop();

            ans[i] = st.empty() ? 0 : st.top() - i;

            st.push(i);
        }

        return ans;
    }
};
