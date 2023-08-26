#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> s;
    for (int i = 0; i < 5; i++)
    {
        s.push(i);
    }

    while (!s.empty())
    {
        cout<<"this is top element : "<<s.top()<<endl;
        cout<<"this is stack size : "<<s.size()<<endl;
        s.pop();
    }
    
    

    return 0;
}
