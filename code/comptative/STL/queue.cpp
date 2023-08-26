#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<int> q;
    for (int i = 0; i < 5; i++)
    {
        q.push(i);
    }

    while (!q.empty())
    {
        cout<<"this is top element : "<<q.front()<<endl;
        q.pop();
    }
    cout<<"this is stack size : "<<q.size()<<endl;

    return 0;
}