class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0){
    return false;
}
stack<int>x;
for(int i=0;i<s.length();i++){
    if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
        x.push(s[i]);
    }
    else{
        if(!x.empty()&&((s[i]==')'&&x.top()=='(')||(s[i]=='}'&&x.top()=='{')|(s[i]==']'&&x.top()=='['))){
            x.pop();
        }
    else{
        return false;
    }
    }
}
if(x.empty()){
    return true;
}
return false;
    }
};
