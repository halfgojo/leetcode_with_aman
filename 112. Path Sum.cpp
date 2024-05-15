class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        return recurser(root, sum, targetSum);
    }

private:
    bool recurser(TreeNode* root, int& sum, int targetSum) {
        if (root == nullptr) {
            return false;
        } else {
            sum += root->val;
            if (sum == targetSum && root->left == nullptr && root->right == nullptr) {
                return true;
            }
            bool f = recurser(root->left, sum, targetSum);
            bool g = recurser(root->right, sum, targetSum);
            if (f || g) {
                return true;
            }
            sum -= root->val;
            return false;
        }
    }
};
