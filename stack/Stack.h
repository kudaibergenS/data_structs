//
// Created by sanzhar_k on 6/8/18.
//

#ifndef DATA_STRUCTS_STACK_H
#define DATA_STRUCTS_STACK_H

#include <cstddef>
#include <iostream>

struct Node
{
    int data;
    Node* next;
};

class Stack
{
public:
    Stack();
    void push(int value);
    void pop();
    int get_top();
    bool is_empty();

private:
    Node* top;

};


#endif //DATA_STRUCTS_STACK_H
