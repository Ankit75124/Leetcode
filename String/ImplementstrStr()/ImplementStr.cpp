class Solution {
public:
    int strStr(string haystack, string needle) {
       int A=needle.length();
        if(A==0){
            return 0;
            }
        for(int i=0;i<haystack.length();i++){
            string s=haystack.substr(i,A);
            if(s==needle){      
            return i;
            }
        }
        return -1; 
    }
};
