class Solution {
public:
    int tribonacci(int n) {
        if(n<2)return n;
        if(n==2) return 1;
        int t1=1,t2=1,t0=0,t3;
        for(int i=3;i<=n;i++){
            t3=(t0+t2+t1);
            t0=t1;
            t1=t2;
            t2=t3;
        }
        return t3;
    }
};
