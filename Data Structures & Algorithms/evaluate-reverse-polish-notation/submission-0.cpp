class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int i;
        vector<string> info = tokens;
        stack<string> st;
        info.push_back(")");
        for (int i = 0; i < info.size(); i++) {
            if (info[i] == ")")
                break;
            if (info[i] != "+" && info[i] != "-" && info[i] != "*" && info[i] != "/")
                st.push(info[i]);
            else {
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();
                if (info[i] == "+")
                    st.push(to_string(b + a));
                else if (info[i] == "-")
                    st.push(to_string(b - a));
                else if (info[i] == "/")
                    st.push(to_string(b / a));
                else if (info[i] == "*")
                    st.push(to_string(b * a));
            }
        }
        return stoi(st.top());
    }
};
