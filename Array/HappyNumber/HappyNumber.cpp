class Solution {
public:
    bool isHappy(int n) {
    int rem,sum,flag=0;
    vector<int>list1;
        while(sum!=1){
            sum=0;
            // cout<<sum<<endl;
            int size=list1.size();
            // cout<<size<<" size"<<endl;
            for(int i=0;i<size-1;i++){
                // cout<<"first loop"<<list1[i]<<endl;
                if(n==list1[i]){
                    // cout<<"if loop "<<list1[i]<<endl;
                    flag=1;
                    break;
                }
            }
            // cout<<flag<<endl;
            if(flag==1){
                return false;
            }
                while (n!=0){
                // cout<<"inside while"<<n<<endl;
            rem=n%10;
            sum=sum+(rem*rem);
            n=n/10;
            // cout<<"inside while"<<sum<<endl;
            }
            // cout<<"outside while"<<sum<<endl;
            n=sum;
            list1.push_back(sum);
            
    }
            
            
        if(sum){
            return true;
        }
        return false;
    }
};
