class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxsum=INT_MIN;
        int currsum=0;
        for(int i :nums){//also for(int i;i<nums.size();i++)
            currsum+=i;
            maxsum=max(maxsum,currsum);
            if(currsum<0){
                currsum=0;
            }

        }
        return maxsum;
    }
};