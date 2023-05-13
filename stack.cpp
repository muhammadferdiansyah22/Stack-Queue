#include <iostream>
#include <stack>

using namespace std;

void printStack(stack <int> myStack){
	stack <int> ms = myStack;
	if(myStack.empty()){
		cout << "Error: stack kosong";
	}
	else{
		while(!myStack.empty()){
			cout << "[>]" << myStack.top() << endl;
			myStack.pop();
		}
		cout << endl;
	}
}
