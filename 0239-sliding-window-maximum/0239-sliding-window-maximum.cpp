class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>max;
        for(int i=0;i<nums.size();i++){
            while(dq.size()&&nums[dq.front()]<=nums[i])
                dq.pop_front();
            dq.push_front(i);
            if(i-dq.back()+1>k)
                dq.pop_back();  
            if(i+1>=k)
                max.push_back(nums[dq.back()]);      
        }
        return max;
    }
};