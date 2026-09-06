class Solution {
public:
    int countRotations(string s, int k) {
       int count=0,next=0;
        int n=s.length();
        for(int i=0;i<n;i++){
           next=(i+1)%n;
            if(s[i]==s[next]){
                count++;
            }
       }
        if(k==count-1){
            return count;
        }else if(k==count){
            return n-count;
        }
        return 0;
    }
};