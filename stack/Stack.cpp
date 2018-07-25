//
// Created by sanzhar_k on 6/8/18.
//

#include "Stack.h"

Stack::Stack()
{
    top = NULL;
}

void Stack::push(int value) {
    Node* tmp = new Node();
    tmp->data = value;
    tmp-> next = top;
    top = tmp;
}

void Stack::pop() {
    if (top == NULL) return;

    Node *tmp = top;
    top = top->next;
    free(tmp);
}
