class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0;
        long rem=0;
        long temp=x;
        while(temp>0){
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
        
        if(rev==x){
            return true;
        }
        else{
            return false;
        }
    }
};
