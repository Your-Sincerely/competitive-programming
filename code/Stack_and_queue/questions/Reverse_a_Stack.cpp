/*
You have been given two stacks that can store integers as
the data. Out of the two given stacks, one is populated and
the other one is empty. You are required to write a function
that reverses the populated stack using the one which is
empty.
*/

#include <iostream>
#include <stack>
using namespace std;


int main() {
    stack<int> input, extra;
    int size;
    cin >> size;

    for (int i = 0, val; i < size; i++) {
        cin >> val;
        input.push(val);
    }

    reverseStack(input, extra);

    while (!input.empty()) {
        cout << input.top() << " ";
        input.pop();
    }
}

void reverseStack(stack<int> &input, stack<int> &extra) {
    //Write your code here
    while (!input.empty()) {
        extra.push(input.top());
        input.pop();
    }
    stack<int> q;
    while (!extra.empty()) {
        q.push(extra.top());
        extra.pop();
    }
    while (!q.empty()) {
        input.push(q.top());
        q.pop();
    }
}