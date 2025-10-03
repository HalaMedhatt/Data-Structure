class Solution {
    bool isPal(string s){
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[s.size()-i-1])
                return 0;

        }
        return 1;

    }
public:
    bool isPalindrome(string s) {
        string ss;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                s[i]=tolower(s[i]);
                ss+=s[i];
            }
        }
        return isPal(ss);

    }
};