/*
For a given expression in the form of a string, find if there exist
any redundant brackets or not. It is given that the expression contains
only rounded brackets or parenthesis and the input expression
will always be balanced.
A pair of the bracket is said to be redundant when a sub-expression is
surrounded by unnecessary or needless brackets.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}

#include <stack>

bool checkRedundantBrackets(string s) {
	// Write your code here;
	stack<int> q;
	int i = 0;

	while( i<s.length()){
		if(s[i] == ')'){
			int c = 0;
			while(q.top() != '('){
				q.pop();
				c++;
			}
			q.pop();
			if(c<2){
				return true;
			}
			i++;
		} else {
			q.push(s[i]);
			i++;
		}
	}

	return false;
}