class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>idx(300,-1);
        int mx=0;
        for(int i=0;i<s.size();i++){
            if(idx[s[i]]!=-1){
                for(int j=0;j<300;j++){
                    if(idx[j]<idx[s[i]])
                        idx[j]=-1;
                }
            }
            idx[s[i]]=i;
            int cnt=0;
            for(auto&it:idx){
                if(it!=-1) cnt++;
            }
            mx=max(mx,cnt);
        }
        return mx;

    }
};