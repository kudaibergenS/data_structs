#include <bits/stdc++.h>

using namespace std;

struct Node
{
    char data;
    Node* next;
};

Node* top = NULL;

bool isEmpty()
{
    return (top == NULL);
}

void push(char c)
{
    Node* tmp = new Node();
    tmp->data = c;
    tmp->next = top;
    top = tmp;
}

void pop()
{
    if (isEmpty())
        return;

    Node* tmp = top;
    top = top->next;
    free(tmp);
}

char get_top()
{
    if (!isEmpty())
        return 'e';

    Node* tmp = top;
    return tmp->data;
}

bool isPair(char o, char c)
{
    if (o == '{' && c == '}')
        return true;
    else if (o == '[' && c == ']')
        return true;

    else return o == '(' && c == ')';
}

string isBalanced(string s) {

    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << endl;
        if (s[i] == '[' || s[i] == '{' || s[i] == '(')
            push(s[i]);

        else if (s[i] == ']' || s[i] == '}' || s[i] == ')')
        {
            if (isEmpty() || !isPair(top->data, s[i]))
                return "NO";
            else
                pop();
        }

    }

    return isEmpty() ? "YES" : "NO";
}

int main()
{
    string s;
    cin >> s;

    string result = isBalanced(s);
    cout << result;
    return 0;
}
