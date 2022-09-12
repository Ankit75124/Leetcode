class Solution {
public:
    
    int occurence(vector<int>& nums, int target, bool isFirst) {
        
        int start = 0;
        int end = nums.size() - 1;
        
        int ans = -1;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(nums[mid] == target) {
                ans = mid;
                if(isFirst) {
                    end = mid - 1;                
                } else {
                    start = mid + 1;
                }
            } else if(nums[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int first = occurence(nums, target, true);
        int last = occurence(nums, target, false);
    
        return {first, last};
    }
};
