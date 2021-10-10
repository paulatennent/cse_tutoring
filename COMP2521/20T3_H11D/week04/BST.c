// Written by Paula Tennent ;3

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct BSTNode *BSTree;
typedef struct BSTNode {
	int value;
	BSTree left;
	BSTree right;
} BSTNode;


int main(void) {

}

// count the number of nodes
int BSTreeNumNodes(BSTree t) {
    // BASE CASE
    if (t == NULL) return 0;

    //if (t->left == NULL && t->right == NULL) return 1; 
    // ^ This can be added in, but will be caught by the recursive case too, so its not necessary

    // RECURSIVE CASE
    //          left tree                   right tree          self
    return BSTreeNumNodes(t->left) + BSTreeNumNodes(t->right) + 1;

}

int BSTreeCountOdds(BSTree t) {
    // BASE CASE
    if (t == NULL) return 0;

    // RECURSIVE CASE
    if (t->value % 2 == 0) {
        return BSTreeCountOdds(t->left) + BSTreeCountOdds(t->right) + 0; // self == 0
    } else {
        return BSTreeCountOdds(t->left) + BSTreeCountOdds(t->right) + 1; // self == 1
    }

}

// computes the height of a tree
int BSTreeHeight(BSTree t) {
    // BASE CASES
    if (t == NULL) return 0;

    // leaf node
    if (t->left == NULL && t->right == NULL) return 1; 
    // ^ we dont actually need this line as the recursive case will catch it!

    // RECURSIVE CASES
    // find the height of both left and right
    int heightLeft = BSTreeHeight(t->left);
    int heightRight = BSTreeHeight(t->right);

    // the current height will be dependent on the height of the deepest child, so take the max
    if (heightLeft > heightRight) {
        return heightLeft + 1;
    } else {
        return heightRight + 1;
    }
}

// counts number of internal nodes
int BSTreeCountInternal(BSTree t) {
    // Base Case
    if (t == NULL) return 0;

    // if its a leaf node
    if (t->left == NULL && t->right == NULL) return 0; 

    // else it must be an internal node
    return BSTreeNumNodes(t->left) + BSTreeNumNodes(t->right) + 1;

}

int BSTreeNodeLevel(BSTree t, int key) {
    // if its an empty tree, the key doesn't exist
    if (t == NULL) return -1;

    if (t->value == key) {
        return 0;
    }

    // recursive case;
    // ask: does either left or right have the key?
    int res;
    if (key < t->value) {
        res = BSTreeNodeLevel(t->left, key);
    } else {
        res = BSTreeNodeLevel(t->right, key);
    }


    // if its on the left, return left + 1
    if (res != -1) {
        return res + 1;
    } 
    // if both are -1, then return -1
    return -1;
}

int BSTreeCountGreater(BSTree t, int val) {
    // BASE CASE
    if (t == NULL) return 0;

    // RECURSIVE CASE

    // if we have found t, we only need to go to the right
    // remember question asks for numbers greater than val (not grater than or equal).
    if (t->value = val) {
        return BSTreeCountGreater(t->right, val);
    }

    // if we have found a number greater than t, we can go to the left or right
    //    3
    //  2   4
    // BSTreeCountGreater(3, 1) -> go to the left (2) and right (4)
    if (t->value > val) {
        return 1 + BSTreeCountGreater(t->left, val) + BSTreeCountGreater(t->right, val);;
    }

    // this is where t->value < val, so we dont want to search any other nodes.
    // do nothing here
}
