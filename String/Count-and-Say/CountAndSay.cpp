class Solution {
public:
    string countAndSay(int n) {
        string number="1";
    for(int u=2;u<=n;u++)
    {   string ans="";
        for(int i=0, j=0;i<number.size();i=j)
        {
            while(j<number.size() and number[j]==number[i]) j++;
            ans+=to_string(j-i)+number[i];  
        }
        number=ans;
    }
    return number;
    }
};
