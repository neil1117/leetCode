//
//  main.c
//  leetCode
//
//  Created by Neil Wu on 2017/7/13.
//  Copyright © 2017年 Neil Wu. All rights reserved.
//

#include <stdio.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int countNodes(struct TreeNode* root) {
    
    int nodeCount = 0;
    int leftLevel = 1;
    int rightLevel = 1;
    
    if(root == NULL)
        return 0;
    
    struct TreeNode *temp = root;
    while (temp -> right != NULL) {
        temp = temp->right;
        rightLevel += 1;
    }
    temp = root;
    while (temp -> left != NULL) {
        temp = temp->left;
        leftLevel += 1;
    }
    if (rightLevel == leftLevel) {
        nodeCount = pow(2, rightLevel)-1;
    }
    
    
    return nodeCount;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    struct TreeNode a;
    struct TreeNode b;
    struct TreeNode c;
    
    a.right = &b;
    b.right = &c;
    c.right = NULL;
    int count = countNodes(&a);
    printf("%d", count);
    
    return 0;
}






