class Solution {
public:
    bool isPowerOfTwo(int n) {

        int ans=1;
        int i=0;
        while(i<=30){
            
            if(ans==n){
                return true;
            }
            if(ans<INT_MAX/2)
                ans=ans*2;
            i++;
        }
        
        return false;
    }
};