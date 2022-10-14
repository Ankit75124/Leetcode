class Solution {
public:
    int minMoves(vector<int>& nums) {
        int res=0 ,min=0;
        min=*min_element(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            if(min!=nums[i]){
                res=res+(nums[i]-min);
                // cout<<res<<endl;
            }
            
        }
        
        return res;
    }
    
};
