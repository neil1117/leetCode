//
//  Count Complete Tree Nodes.c
//  leetCode
//
//  Created by Neil Wu on 2017/7/13.
//  Copyright © 2017年 Neil Wu. All rights reserved.
//

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int countNodes(struct TreeNode* root) {
    int level = 1;
    
    if(root == NULL)
        return 0;
    
    struct TreeNode *tempL = root;
    struct TreeNode *tempR = root;
    for (;tempL -> left != NULL; level++) {
        tempL = tempL->left;
        tempR = tempR->right;
    }
    
    if (tempR != NULL) {
        //原本是用pow的方法去算2的次方，但是這個方法更快
        return (1 << level) - 1;
    }
    else {
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
}
