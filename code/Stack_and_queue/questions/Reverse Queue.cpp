/*
You have been given a queue that can store integers as the data.
You are required to write a function that reverses the populated
queue itself without using any other data structures.
*/

#include <queue>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        queue<int> q;
        int size;
        cin >> size;

        for (int i = 0, val; i < size; i++)
        {
            cin >> val;
            q.push(val);
        }

        reverseQueue(q);
        while (!q.empty())
        {
            cout << q.front() << " ";
            q.pop();
        }

        cout << "\n";
    }
}

void reverseQueue(queue<int> &q)
{
    // base condition
    if (q.size() == 1)
    {
        return;
    }
    // storing top
    int a = q.front();
    q.pop();
    // recursion
    reverseQueue(q);
    // changing order
    q.push(a);
}