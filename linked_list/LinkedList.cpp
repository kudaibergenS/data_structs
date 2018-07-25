#include "LinkedList.h"

LinkedList::LinkedList()
{
    head = NULL;
    tail = NULL;
}

void LinkedList::createNode(int value)
{
    Node *tmp = new Node;
    tmp->data = value;
    tmp->next = NULL;

    if (head == NULL)
    {
        head = tmp;
        tail = tmp;
        tmp = NULL;
    }
    else
    {
        tail->next=tmp;
        tail=tmp;
    }
}

void LinkedList::displayList()
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        std::cout << tmp->data << " ";
        tmp = tmp->next;
    }
    std::cout << std::endl;
}

void LinkedList::displayListRecursive(Node* head) {
    if (head == NULL)
    {
        std::cout << std::endl;
        return;
    }
    std::cout << head->data << " ";
    displayListRecursive(head->next);
}

void LinkedList::displayListReverseRecursive(Node *head) {
    if (head == NULL)
    {
        std::cout << std::endl;
        return;
    }
    displayListRecursive(head->next);
    std::cout << head->data << " ";
}

void LinkedList::insert_start(int value)
{
    Node *tmp = new Node;
    tmp->data = value;
    tmp->next = head;
    head = tmp;
}

void LinkedList::insert_position(int value, int pos)
{
    Node *tmp = new Node;

    if (pos == 0)
    {
        tmp->next = head;
        head = tmp;
        return;
    }

    Node *prev, *cur = head;
    for (int i = 0; i < pos; i++)
    {
        prev = cur;
        cur = cur->next;
    }
    tmp->data = value;
    prev->next = tmp;
    tmp->next = cur;
}

Node *LinkedList::getHead() const {
    return head;
}


