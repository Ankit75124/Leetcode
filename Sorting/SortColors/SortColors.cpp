class Solution {
public:
    void sortColors(vector<int>& a) {
        int low=0,mid=0,hig=a.size()-1;
        while(hig>=mid) {
            if(a[mid]==0) {
                swap(a[low],a[mid]);
                low++;
                mid++;
            } else if(a[mid]==1) {
                mid++;
            } else {
                swap(a[mid],a[hig]);                
                hig--;
            }              
        }
    }
};
