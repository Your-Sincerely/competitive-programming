/*
For a given expression in the form of a string, find the minimum number
 of brackets that can be reversed in order to make the expression balanced. 
 The expression will only contain curly brackets.
If the expression can't be balanced, return -1.
*/

#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main() {
    string input;
    cin >> input;
    cout << countBracketReversals(input);
}

#include <stack>

int countBracketReversals(string s) {
	// Write your code here
	int c = 0;
	stack<char> q;
	//  for odd length string
	if(s.length()%2 != 0){
		return -1;
	}
	//  to remove balanced and enter unbalanced element
	for (int i = 0; i<s.length(); i++){
		if(s[i] == '{'){
			q.push(s[i]);
		}
		else{
			if(q.empty() ||q.top() != '{' ){
				q.push(s[i]);
			}
			else{
				q.pop();
			}
		}
	}
	while(!q.empty()){
		char a,b;
		a = q.top();
		q.pop();
		b = q.top();
		q.pop();

		if(a == b){
			c++;
		}
		else{
			c+= 2;
		}
	}
	return c;
}