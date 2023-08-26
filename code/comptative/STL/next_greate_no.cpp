#include <iostream>
#include <stack>
using namespace std;

int *next_greate_no(int a[], int size)
{
    int *b = new int[size];
    stack<int> s;

    int i = size - 1;
    while (i >= 0)
    {
        if (s.empty())
        {
            b[i] = -1;
            s.push(a[i]);
            i--;
        }
        else if (a[i] < s.top())
        {
            b[i] = s.top();
            s.push(a[i]);
            i--;
        }
        else
        {
            s.pop();
        }
    }
    return b;
}

int main(int argc, char const *argv[])
{
    int a[4] = {1, 3, 2, 4};
    int *b = next_greate_no(a, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}