class Solution {
public:
    bool isPalindrome(int x) {
        bool p=1;
        string s=to_string(x);
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[s.size()-i-1])
                p=0;
        }
        return p;
    }
};