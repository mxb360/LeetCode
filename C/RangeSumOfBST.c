/* 938. 二叉搜索树的范围和
 * 
 * 给定二叉搜索树的根结点 root，返回 L 和 R（含）之间的所有结点的值的和。
 * 二叉搜索树保证具有唯一的值。
 * 
 * 示例 1：
 * 
 * 输入：root = [10,5,15,3,7,null,18], L = 7, R = 15
 * 输出：32
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int rangeSumBST(struct TreeNode* root, int L, int R){
    int sum = 0;
    
    if (!root)
        return 0;

    if (root->val > R)
        return rangeSumBST(root->left, L, R);
    else if (root->val < L)
        return rangeSumBST(root->right, L, R);
    else
        return root->val + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
    
    return sum;   
}
