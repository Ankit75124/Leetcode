class Solution {
public:
    bool isPerfectSquare(int num) {

        // using binary search 

        int s=0;
        int e= num;
        while(s<=e){
            long long int mid = s+(e-s)/2;
            long long int sq = mid*mid; 
            if(sq == num)return true;
            else if(sq > num) e = mid-1;
            else{
                s = mid+1;
            }
        }

        return false;


        // using brute force
        // if(num == 1) return true;
        // for (long long int i=1;i<=num/2;i++){
        //     if(i*i==num) return true;
        // }
        // return false ;
    }
};
