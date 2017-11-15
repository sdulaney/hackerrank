//
//  main.cpp
//  Trees - Is this a binary search tree?
//
//  Created by Stewart Dulaney on 11/14/17.
//  Copyright © 2017 Stewart Dulaney. All rights reserved.
//

#include <iostream>
#include <climits>

/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.
 
 The Node struct is defined as follows:
 struct Node {
 int data;
 Node* left;
 Node* right;
 }
 */

struct Node {
    int data;
    Node* left;
    Node* right;
};

bool isBST(Node* node, int min, int max) {
    if(node == NULL)
        return true;
    if(node->data < min || node->data > max)
        return false;
    return isBST(node->left, min, node->data-1) && isBST(node->right, node->data+1, max);
}

bool checkBST(Node* root) {
    return isBST(root, INT_MIN, INT_MAX);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
