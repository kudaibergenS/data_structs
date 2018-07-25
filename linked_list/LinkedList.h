//
// Created by sanzhar_k on 6/4/18.
//

#ifndef DATA_STRUCTS_LINKEDLIST_H
#define DATA_STRUCTS_LINKEDLIST_H

#include <cstddef>
#include <iostream>

struct Node {
    int data;
    Node *next;
};

class LinkedList
{
public:
    LinkedList();
    Node *getHead() const;
    void createNode(int value);
    void insert_start(int value);
    void insert_position(int value, int pos);
    void displayList();
    void displayListRecursive(Node* head);
    void displayListReverseRecursive(Node* head);

private:
    Node *head, *tail;
};

#endif //DATA_STRUCTS_LINKEDLIST_H
