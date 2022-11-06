class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> hash;
        
        int i, n = nums.size();
        
        for(i=0; i<n; i++)
        {
            if(hash.find(nums[i])!=hash.end())
                break;
            
            hash.insert(nums[i]);
        }
        
        return nums[i];
    }
};
