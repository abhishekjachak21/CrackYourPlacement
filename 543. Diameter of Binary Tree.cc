class Solution {
public:                                //first ever tree question,by me,on 07-08-2024
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int heightLeft = maxDepth(root->left);
        int heightRight = maxDepth(root->right);
        return max(heightLeft, heightRight) + 1; //this step is difficult to understand;
    }
};