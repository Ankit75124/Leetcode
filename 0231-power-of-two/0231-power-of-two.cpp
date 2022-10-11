class Solution {
public:
    bool isPowerOfTwo(int n) {
        int flag=0;
        int i=0;
        while(i<=30){
            if(pow(2,i)==n){
                flag=1;
                break;
            }
            i++;
        }
        if(flag==1){
            return true;
        }
        else{
            return false;
        }
    }
};