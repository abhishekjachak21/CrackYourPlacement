
class Solution {   ///IT WAS REALLY NICE EXPERIENCE SOLVING THIS!! PEACE! 
public:
    bool help(TreeNode* p, TreeNode* q){
       //base case; dono NULL honge toh bhi same tree
       if(p == NULL && q == NULL) return true;
       if(p == NULL || q == NULL) return false;

        //if root1==root2, return true else false
        if(p->val != q->val) return false;
        //if rt1-L == rt2-L && rt1-R == rt2-R, true...else false
        if(help(p->left, q->left)==true && help(p->right, q->right)==true) 
           return true;
        else 
           return false;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return help(p,q);
    }
};