#include <iostream>
#include <deque>
using namespace std;

int delete_front(deque<int> dq)
{
    while (!dq.empty())
    {
        cout << "this is top element : " << dq.front() << endl;
        dq.pop_front();
    }
    cout << "this is stack size : " << dq.size() << "\n"
         << endl;

    return 0;
}

int delete_back(deque<int> &dq)
{
    while (!dq.empty())
    {
        cout << "this is back element : " << dq.back() << endl;
        dq.pop_back();
    }
    cout << "this is stack size : " << dq.size() << "\n"
         << endl;

    return 0;
}

int main(int argc, char const *argv[])
{
    deque<int> dq;
    for (int i = 0; i < 5; i++)
    {
        dq.push_back(i);
    }
    delete_front(dq);
    delete_back(dq);
    for (int i = 0; i < 5; i++)
    {
        dq.push_front(i);
    }
    delete_front(dq);
    delete_back(dq);

    return 0;
}