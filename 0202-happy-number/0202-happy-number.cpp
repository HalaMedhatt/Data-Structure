class Solution {
public:
    bool isHappy(int n) {
        int cnt=0;
        while(cnt<=1e6){
            if(n==1)
                return 1;
            int tmp=0;
            while(n){
                int digit=n%10;
                tmp+=(digit*digit);
                n/=10;
            }  
            n=tmp; 
            cnt++; 


        }
        return 0;

        
    }
};