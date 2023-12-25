#include <iostream>
#include <climits>
using namespace std;

struct TreeNode {
       int val;
       TreeNode *left;
       TreeNode *right;
       TreeNode() : val(0), left(nullptr), right(nullptr) {}
       TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
       TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
   };
 
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxPath = INT_MIN;
        dfs(root, maxPath);
        return maxPath;
    }
private:
    int dfs(TreeNode* root, int& maxPath) {
        if (root == NULL) {
            return 0;
        }

        int leftMax = max(dfs(root->left, maxPath), 0);
        int rightMax = max(dfs(root->right, maxPath), 0);

        maxPath = max(maxPath, root->val + leftMax + rightMax);

        return root->val + max(leftMax, rightMax);
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    Solution solution1;

    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);
    cout << "Ответ:  " << solution1.maxPathSum(root1) << endl;

    delete root1->left;
    delete root1->right;
    delete root1;

    Solution solution2;
    TreeNode* root2 = new TreeNode(-10);
    root2->left = new TreeNode(9);
    root2->right = new TreeNode(20);
    root2->left->left = new TreeNode(NULL);
    root2->left->right = new TreeNode(NULL);
    root2->right->left = new TreeNode(15);
    root2->right->right = new TreeNode(7);



    cout << "Ответ: " << solution2.maxPathSum(root2) << endl;

    return 0;
}