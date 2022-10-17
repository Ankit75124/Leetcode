class Solution {
public:
    int firstOccurance(vector<int>& nums,int target){
        int start=0;
        int size= nums.size();
        int end=size-1;
        int ans=-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(nums[mid]==target){
                ans=mid;
                end=mid-1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    };
    int lastOccurance(vector<int>& nums,int target){
        int start=0;
        int size= nums.size();
        int end=size-1;
        int ans=-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(nums[mid]==target){
                ans=mid;
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {

        
        int first, last;
        first=firstOccurance(nums,target);
        last=lastOccurance(nums,target);
        return {first,last};
        
    }
};
