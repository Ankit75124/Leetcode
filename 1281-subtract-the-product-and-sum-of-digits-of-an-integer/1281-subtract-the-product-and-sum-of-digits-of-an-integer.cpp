class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int sum=0;
        int product=1;
        while(n!=0){
            int rem = n % 10;
            sum=sum+rem;
            product=rem * product;
            n=n/10;
        }
        return product-sum;
    }
};