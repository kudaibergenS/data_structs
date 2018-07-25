//
// Created by sanzhar_k on 6/4/18.
//

#include "BinaryTree.h"

BinaryTree::BinaryTree()
{
//    left = NULL;
//    right = NULL;
}

Node* BinaryTree::createNode(int value)
{
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = newNode->right = NULL;

    return newNode;
}

Node* BinaryTree::insert(Node* root, int value)
{
    if (root == NULL)
        return createNode(value);
    else
    {
        Node* cur;
        if (value <= root->data)
        {
            cur = insert(root->left, value);
            root->left = cur;
        }
        else
        {
            cur = insert(root->right, value);
            root->right = cur;
        }
        return root;
    }
}

void BinaryTree::preOrderTraversal(Node *root)
{
    // ROOT -- LEFT -- RIGHT
    if (root == NULL) return;

    std::cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void BinaryTree::inOrderTraversal(Node *root)
{
    // LEFT -- ROOT -- RIGHT
    if (root == NULL) return;

    inOrderTraversal(root->left);
    std::cout << root->data << " ";
    inOrderTraversal(root->right);
}

void BinaryTree::postOrderTraversal(Node *root)
{
    // LEFT -- RIGHT -- ROOT
    if (root == NULL) return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    std::cout << root->data << " ";
}

bool BinaryTree::search(Node *root, int value) {
    if (root == NULL)
        return false;

    else if (value == root->data)
        return true;

    else if (value <= root->data)
        return search(root->left, value);

    else
        return search(root->right, value);
}
