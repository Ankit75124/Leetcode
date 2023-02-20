class Solution {
public:
    int firstBadVersion(int n) {
        long st=1;
        long et=n;
        long mid=(st+et)/2;
        while(st<=et)
        {
            mid=(st+et)/2;
            if(isBadVersion(mid)==true && isBadVersion(mid-1)==false)
                return mid;
            if(isBadVersion(mid)==true)
                et=mid-1;
            else
                st=mid+1;
        }
        return mid;
    }
};
