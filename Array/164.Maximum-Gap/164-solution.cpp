class Solution {
public:
    int maximumGap(vector<int>& nums) {
       vector<int>arr;
        arr=nums;
        sort(arr.begin(),arr.end());
        
        // for(int i=0;i<arr.size();i++){
        //     cout<<arr[i]<<endl;
        // }
        int res=0;
        for(int i=0;i<arr.size()-1;i++){
            
            for(int j=1;j<arr.size();j++){
                
                if(arr[j]-arr[i]>res){
                    res=arr[j]-arr[i];
                    // cout<<"res  "<<res<<endl;
                    
                }
                i++;
            }
        }
        return res;
    }
};
