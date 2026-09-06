class Solution {
public:
    double myPow(double x, int n) {
        long binaryterm=n;
        if(x==1)return 1.0;
        if(x==0)return 0.0;
        if(n==0)return 1.00;
        if(x==-1 && n%2==0) return 1.00;
        if(x==-1 && n%2!=0) return -1.00;
        
        double ans=1;
        if(n<0){
            x=1/x;
            binaryterm=-binaryterm;
        }
        while(binaryterm>0){
            if(binaryterm%2==1){
            ans*=x;
            }
        x*=x;
        binaryterm/=2;
        }
    return ans;
    }
};