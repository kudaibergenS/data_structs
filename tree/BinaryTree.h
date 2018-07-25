//
// Created by sanzhar_k on 6/4/18.
//

#ifndef DATA_STRUCTS_BINARYTREE_H
#define DATA_STRUCTS_BINARYTREE_H

#include <cstddef>
#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
};

class BinaryTree
{
public:
    BinaryTree();
    Node* createNode(int value);
    Node* insert(Node* root, int value);
    void preOrderTraversal(Node* root);
    void inOrderTraversal(Node* root);
    void postOrderTraversal(Node* root);
    bool search(Node* root, int value);

private:
    Node* left, right;
};


#endif //DATA_STRUCTS_BINARYTREE_H
