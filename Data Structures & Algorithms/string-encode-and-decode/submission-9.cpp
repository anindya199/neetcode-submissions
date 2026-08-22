class Solution {
public:
    vector<int>len;
    string encode(vector<string>& strs) {
        string encoded;
        for(string s: strs)
        {
            encoded += s;
            len.push_back(s.size());
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string>decoded;
        string temp="";
        int i=0,j=len[0];
        for(int k=0;k<len.size();k++)
        {
            j=i+len[k];
            temp.clear();
            while(i<j)
            {
                temp+=s[i];
                i++;
            }
            decoded.push_back(temp);
        }
        return decoded;
    }
};
