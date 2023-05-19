/*
Afzal has been working with an organization called 'Money Traders'
for the past few years. The organization is into the money trading
business. His manager assigned him a task. For a given array/list 
of stock's prices for N days, find the stock's span for each day.
The span of the stock's price today is defined as the maximum number
 of consecutive days(starting from today and going backwards) for 
 which the price of the stock was less than today's price.
For example, if the price of a stock over a period of 7 days are 
[100, 80, 60, 70, 60, 75, 85], 
then the stock spans will be 
[1, 1, 1, 2, 1, 4, 6].
*/

#include <iostream>
using namespace std;

#include "solution.h"

int main() {
    int size;
    cin >> size;

    int *input = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }

    int *output = stockSpan(input, size);
    for (int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }

    cout << "\n";

    delete[] input;
    delete[] output;
}

#include <stack>

int* stockSpan(int *p, int s)  {
	// initiallization
	stack<int> q;
	// output array
	int*  a = new int[s];
	int i = 0;

//  to check all value
	while(i<s){
		// if stack empty
		if(q.empty()){
			q.push(i);
			a[i] = ++i;
		}
		//  if value is smaller than value at stack top index
		else if (p[i]<=p[q.top()]){
			a[i] = i - q.top();
			q.push(i++);
		}
		// pop any smaller value than current value
		else{
			q.pop();
		}
	}

	return a;
}