/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        else
           return isSubSymmetric(root->left,root->right);
    }
    bool isSubSymmetric(TreeNode* leftSide, TreeNode* rightSide)
    {
        if(leftSide == NULL && rightSide == NULL) // 자식노드 둘다 없는 경우
            return true;
        else if(leftSide == NULL || rightSide == NULL) // 하나만 있을 경우 대칭이 아님
            return false;
        else
        {
            if(leftSide->val == rightSide->val) //둘다 있을 경우 값을 비교하여 같을 경우
                return isSubSymmetric(leftSide->left,rightSide->right) and isSubSymmetric(leftSide->right, rightSide->left);
            else
                return false;// 둘다 있는데 값이 다를 경우 대칭이 아니다.
        }   
                
    }
};


//2 iterative하게 풀기
