//https://www.codingninjas.com/studio/problems/preorder-traversal_8230856?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h>

using namespace std;

// class TreeNode
// {
// public:
//     int data;
//     TreeNode *left, *right;
//     TreeNode() : data(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : data(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
// };

void preorderTraversal(TreeNode *root, vector<int> &result)
{
    if (root == nullptr)
        return;

    result.push_back(root->data); // Visit the current node (preorder)

    preorderTraversal(root->left, result);   // Traverse the left subtree
    preorderTraversal(root->right, result);  // Traverse the right subtree
}

vector<int> getPreOrderTraversal(TreeNode *root)
{
    vector<int> result;
    preorderTraversal(root, result);
    return result;
}
