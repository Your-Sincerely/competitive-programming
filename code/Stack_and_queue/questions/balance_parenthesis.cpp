#include <iostream>
#include "C:\Users\LENOVO\Documents\DSA Coding Ninjas\competitive-programming\code\Stack_and_queue\lectures\StackUsingArray.h"
#include <stack>
using namespace std;

int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout<<s.top()<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;

}
 