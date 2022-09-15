class Solution {
public:
    TreeNode* build(vector<int>&inorder,vector<int>&postorder,int is,int ie,int &post,unordered_map<int,int>&um){
        if(is>ie){
            return nullptr;
        }
        
        TreeNode* root=new TreeNode(postorder.at(post));
        
        int index=um[postorder.at(post)];
        post--;
    
        root->right=build(inorder,postorder,index+1,ie,post,um);
        root->left=build(inorder,postorder,is,index-1,post,um);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int post=postorder.size()-1;
        unordered_map<int,int>um;
        for(int i{0};i<inorder.size();++i){
            um[inorder.at(i)]=i;
        }
        return build(inorder,postorder,0,inorder.size()-1,post,um);
    }
};
