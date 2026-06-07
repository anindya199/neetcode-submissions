class Solution {
public:
    bool isPalindrome(string s) {
        int i;
        string actualS,reverseS;
        for(i=0;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            actualS+=((s[i]-'A')+'a');
            else if(s[i]>='a' && s[i]<='z')
            actualS+=s[i];
            else if(s[i]>='0' && s[i]<='9')
            actualS+=s[i];
            else
            continue;
        }
        reverseS=actualS;
        reverse(reverseS.begin(),reverseS.end());

        return actualS==reverseS;
    }
};
