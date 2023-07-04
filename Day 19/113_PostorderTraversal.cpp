//https://www.codingninjas.com/studio/problems/postorder-traversal_8230858?challengeSlug=striver-sde-challenge&leftPanelTab=0

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

void postorderTraversal(TreeNode *root, vector<int> &result)
{
    if (root == nullptr)
        return;

    postorderTraversal(root->left, result);   // Traverse the left subtree
    postorderTraversal(root->right, result);  // Traverse the right subtree

    result.push_back(root->data); // Visit the current node (postorder)
}

vector<int> getPostOrderTraversal(TreeNode *root)
{
    vector<int> result;
    postorderTraversal(root, result);
    return result;
}
