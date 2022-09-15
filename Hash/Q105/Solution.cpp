class Solution {
public:
    TreeNode* build(vector<int>& preorder,vector<int>&inorder,int is,int ie,int &pre, unordered_map<int,int>&um){
        if(is>ie){
            return nullptr;
        }
        TreeNode* root=new TreeNode(preorder.at(pre));
        
        int index=um[preorder.at(pre)];
        pre++;
        
        root->left=build(preorder,inorder,is,index-1,pre,um);
        
        root->right=build(preorder,inorder,index+1,ie,pre,um);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int pre=0;
        unordered_map<int,int>um;
        
        for(int i{0};i<inorder.size();++i){
            um[inorder.at(i)]=i;
        }
        return build(preorder,inorder,0,inorder.size()-1,pre,um);
    }
};
