#include <algorithm>
class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n=nums.size();
        if(n%2!=0){return 0;}
        
        int count=0;int half=0;

            long long l=0,r=0;
             half=n/2;
            for(int j=0;j<half;j++){
               l+=nums[j];
                r+=nums[j+half];
            }
        for(int i=0;i<n;i++){
            if(l>r){
                count++;
            }
            long long ls =nums[i];
            long long rs =nums[(i+half)%n];
            l=l-ls+rs;
            r=r-rs+ls;
            
            
        }
        return count;
    }
};