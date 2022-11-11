class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector <int> v3;
        int i = 0; int j =0;
        while(i<m && j<n){
            
            if(nums1[i]>nums2[j]){
                v3.push_back(nums2[j]);
                j++;
            }else {

            v3.push_back(nums1[i]);
                i++;
                
            }   
        }
        
        while(i<m){
            v3.push_back(nums1[i]);
                i++; 
        }
        
          while(j<n){
            v3.push_back(nums2[j]);
                j++; 
        
              
    }
        nums1=v3;
    }
};
